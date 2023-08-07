class DialogueMenuEx final : public RE::DialogueMenu
{
public:
	static void Install()
	{
		REL::Relocation<uintptr_t> vtbl(RE::VTABLE_DialogueMenu[0]);
		_ProcessMessageFn = vtbl.write_vfunc(0x4, &ProcessMessageEx);
	}

	RE::UI_MESSAGE_RESULTS ProcessMessageEx(RE::UIMessage& a_message)
	{
		if (a_message.type == RE::UI_MESSAGE_TYPE::kUpdate) {
			doAllowProgressFix();
		}

		return _ProcessMessageFn(this, a_message);
	}

private:
	using ProcessMessageFn = decltype(&RE::DialogueMenu::ProcessMessage);

	inline static REL::Relocation<ProcessMessageFn> _ProcessMessageFn;

	static void doAllowProgressFix()
	{
		if (const auto ui = RE::UI::GetSingleton(); ui) {
			if (const auto menu = ui->GetMenu(RE::DialogueMenu::MENU_NAME); menu) {
				menu->uiMovie->SetVariable("_root.DialogueMenu_mc.bAllowProgress", true);
			}
		}
	}
};

SKSEPluginLoad(const SKSE::LoadInterface* skse)
{
	SKSE::Init(skse);
	DialogueMenuEx::Install();
	return true;
}