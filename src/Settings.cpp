#include "Settings.h"

#include "SimpleIni.h"

void Settings::Load()
{
	CSimpleIniA ini;

	ini.SetUnicode();
	ini.LoadFile(R"(.\Data\SKSE\Plugins\InstantlySkipDialogueNG.ini)");

	instantlySkipDialogue = ini.GetBoolValue("General", "bInstantlySkipDialogue");
	allowDialogueProgressBugfix = ini.GetBoolValue("General", "bAllowDialogueProgressBugfix");
}