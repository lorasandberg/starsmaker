#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameColors
struct  GameColors_t1153883414  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] GameColors::colors
	StringU5BU5D_t1642385972* ___colors_2;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(GameColors_t1153883414, ___colors_2)); }
	inline StringU5BU5D_t1642385972* get_colors_2() const { return ___colors_2; }
	inline StringU5BU5D_t1642385972** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(StringU5BU5D_t1642385972* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
