#pragma once

#include <redhook2.h>

// Some natives I manually found

using Void = unsigned int;
using Vehicle = unsigned int;
using Hash = unsigned int;
using BOOL = unsigned int;

#pragma pack(push, 1)
class Vector3
{
public:
	float x;
private:
	char _pad0x04[0x4];
public:
	float y;
private:
	char _pad0x0C[0x4];
public:
	float z;
private:
	char _pad0x14[0x4];
};
#pragma pack(pop)

namespace VEHICLE
{
	Vehicle CREATE_VEHICLE(Hash model, float x, float y, float z, float heading, bool p5, bool p6, bool p7, bool p8) { return invoker::Invoke<Vehicle>(0xAF35D0D2583051B0ull, x, y, z, heading, p5, p6, p7, p8); }
}

namespace STREAMING
{
	BOOL HAS_MODEL_LOADED(Hash model) { return invoker::Invoke<BOOL>(0x1283B8B89DD5D1B6ull, model); }
	void REQUEST_MODEL(Hash model, bool p1) { invoker::Invoke<Void>(0xFA28FE3A6246FC30ull, model, p1); }
	void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoker::Invoke<Void>(0x4AD96EF928BD4F9Aull, model); }
}

namespace PAD
{

}
