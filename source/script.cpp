#include "script.hpp"

#include <redhook2.h>

void WAIT(DWORD ms)
{
	scriptWait(ms);
}

//
// API is the same as ScriptHookV
//
// If you want keyboard input instead of natives, you could borrow `keyboard.h` and `keyboard.cpp` from the ScriptHookV SDK
// It's not included here because of copyright
//

void ScriptMain()
{
	while (true)
	{


		WAIT(0);
	}
}
