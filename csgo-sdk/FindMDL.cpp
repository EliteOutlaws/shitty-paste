#include "csgo-sdk.h"

FindMdlFn oFindMDL;

MDLHandle_t __fastcall Hooks::FindMDL(void* ecx, void* edx, char* FilePath)
{
	/* i hooked it 4 u, figure out how to use it yourself smh */
	/* hint: strstr & sprintf_s */
	/* also before original you mongoloid */

	return oFindMDL(ecx, FilePath); // <-- original
}