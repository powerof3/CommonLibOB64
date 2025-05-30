#pragma once

namespace UE
{
	enum class EFunctionFlags : std::uint32_t
	{
		None = 0x00000000,
		Final = 0x00000001,
		RequiredAPI = 0x00000002,
		BlueprintAuthorityOnly = 0x00000004,
		BlueprintCosmetic = 0x00000008,
		Net = 0x00000040,
		NetReliable = 0x00000080,
		NetRequest = 0x00000100,
		Exec = 0x00000200,
		Native = 0x00000400,
		Event = 0x00000800,
		NetResponse = 0x00001000,
		Static = 0x00002000,
		NetMulticast = 0x00004000,
		UbergraphFunction = 0x00008000,
		MulticastDelegate = 0x00010000,
		Public = 0x00020000,
		Private = 0x00040000,
		Protected = 0x00080000,
		Delegate = 0x00100000,
		NetServer = 0x00200000,
		HasOutParms = 0x00400000,
		HasDefaults = 0x00800000,
		NetClient = 0x01000000,
		DLLImport = 0x02000000,
		BlueprintCallable = 0x04000000,
		BlueprintEvent = 0x08000000,
		BlueprintPure = 0x10000000,
		EditorOnly = 0x20000000,
		Const = 0x40000000,
		NetValidate = 0x80000000,

		AllFlags = 0xFFFFFFFF,
	};
	REX_DEFINE_ENUM_CLASS_FLAGS(EFunctionFlags);
}
