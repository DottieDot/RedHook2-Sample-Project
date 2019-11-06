#pragma once

using Void = int;
using Entity = int;
using Vehicle = int;
using Ped = int;
using Object = int;
using Cam = int;
using Hash = unsigned int;
using BOOL = int;
using Any = int;

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

