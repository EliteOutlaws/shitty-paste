#include "csgo-sdk.h"

FindMdlFn oFindMDL;

MDLHandle_t __fastcall Hooks::FindMDL(void* ecx, void* edx, char* FilePath)
{
	// uhhhh u don't search for the substring when you're putting the exact directory... and it's a const char not a char so sprintf_s wouldn't work... (ps wheres edx in ur original...)

	return oFindMDL(ecx, FilePath); // <-- original
}
