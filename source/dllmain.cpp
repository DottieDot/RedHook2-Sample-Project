// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include <redhook2.h>
#include <stdio.h>

#include "keyboard.hpp"
#include "script.hpp"

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		scriptRegister(hModule, ScriptMain);
		keyboardHandlerRegister(OnKeyboardMessage);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		scriptUnregister(hModule);
		keyboardHandlerUnregister(OnKeyboardMessage);
		break;
	}
	return TRUE;
}

