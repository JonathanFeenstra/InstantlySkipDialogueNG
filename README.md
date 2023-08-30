# Instantly Skip Dialogue NG

This SKSE plugin for Skyrim Special Edition allows most of the dialogue directed to the player to be skipped instantly, bypassing the [750 millisecond delay](https://github.com/Mardoxx/skyrimui/blob/master/src/dialoguemenu/DialogueMenu.as#L10). This includes most dialogue from [Talking Activators](https://www.creationkit.com/index.php?title=TalkingActivator) which is normally unskippable. In addition, it includes a [fix for a bug that prevents the player from skipping dialogue when an NPC is already talking](https://www.nexusmods.com/skyrimspecialedition/mods/67433). If instantly skipping dialogue is disabled in the configuration file, only this bugfix will be applied.

This is a [CommonLibSSE NG](https://github.com/CharmedBaryon/CommonLibSSE-NG) port of the `instantSkipAllDialogue` and `allowDialogueProgressionBugfix` options of [Osmosis-Wrench's Allow Dialogue Progress Fix SKSE](https://github.com/Osmosis-Wrench/AllowDialogueProgressFixSKSE) to support Skyrim SE, AE, and VR. It is based on the [SKSE plugin template](https://github.com/SkyrimDev/HelloWorld-using-CommonLibSSE-NG) from [Skyrim.dev](https://skyrim.dev/skse/first-plugin) and the [CommonLibSSE NG Sample Plugin](https://gitlab.com/colorglass/commonlibsse-sample-plugin).

## User requirements

* [SKSE](https://skse.silverlock.org/)
* [Address Library for SKSE plugins](https://www.nexusmods.com/skyrimspecialedition/mods/32444)
* Enable dialogue subtitles (System > Settings > Display > Dialogue Subtitles or set `bDialogueSubtitles=1` under `[Interface]` in SkyrimPrefs.ini)