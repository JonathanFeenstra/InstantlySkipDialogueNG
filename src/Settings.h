#pragma once

class Settings final
{
public:
	static void Load();

	inline static bool instantlySkipDialogue;
	inline static bool allowDialogueProgressBugfix;

	// Prevent instantiation
	Settings() = default;
	Settings(const Settings&) = delete;
	Settings(Settings&&) = delete;
	void operator=(Settings const&) = delete;
	void operator=(Settings&&) = delete;
	~Settings() = default;
};