#include "script.hpp"

#include "natives.h"
#include "keyboard.hpp"

#include <redhook2.h>
#include <string>


void WAIT(DWORD ms)
{
	scriptWait(ms);
}

bool GetKeyboardInput(const std::string& title, const std::string& prePopulatedText, uint32_t maxChars, std::string& out)
{
	MISC::DISPLAY_ONSCREEN_KEYBOARD(LOCALIZATION::GET_CURRENT_LANGUAGE() == 0, title.c_str(), "", prePopulatedText.c_str(), "", "", "", maxChars);

	while (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
		WAIT(0);

	if (!MISC::GET_ONSCREEN_KEYBOARD_RESULT() || MISC::UPDATE_ONSCREEN_KEYBOARD() != 1)
	{
		return false;
	}
	else
	{
		out = MISC::GET_ONSCREEN_KEYBOARD_RESULT();
		return true;
	}
}

void ScriptMain()
{
	while (true)
	{
		if (KeyJustUp(VK_F12))
		{
			std::string modelString = "";
			if (GetKeyboardInput("", "", 32, modelString))
			{
				Hash model = MISC::GET_HASH_KEY(modelString.c_str());
				if (!STREAMING::IS_MODEL_A_VEHICLE(model))
					continue;

				STREAMING::REQUEST_MODEL(model, false);
				while (!STREAMING::HAS_MODEL_LOADED(model))
				{
					WAIT(0);
				}

				Ped playerPed = PLAYER::PLAYER_PED_ID();
				Vector3 min, max;
				MISC::GET_MODEL_DIMENSIONS(model, &min, &max);

				Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPed, 0.f, max.y - min.y, 0.f);

				VEHICLE::CREATE_VEHICLE(model, coords.x, coords.y, coords.z, 0.f, true, true, false, false);
			}
		}

		WAIT(0);
	}
}
