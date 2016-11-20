#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlanetResult
struct  PlanetResult_t2629313305 
{
public:
	// UnityEngine.GameObject PlanetResult::planet
	GameObject_t1756533147 * ___planet_0;
	// UnityEngine.Color PlanetResult::color
	Color_t2020392075  ___color_1;
	// System.Single PlanetResult::survivedTime
	float ___survivedTime_2;
	// System.Single PlanetResult::<endMass>k__BackingField
	float ___U3CendMassU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_planet_0() { return static_cast<int32_t>(offsetof(PlanetResult_t2629313305, ___planet_0)); }
	inline GameObject_t1756533147 * get_planet_0() const { return ___planet_0; }
	inline GameObject_t1756533147 ** get_address_of_planet_0() { return &___planet_0; }
	inline void set_planet_0(GameObject_t1756533147 * value)
	{
		___planet_0 = value;
		Il2CppCodeGenWriteBarrier(&___planet_0, value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(PlanetResult_t2629313305, ___color_1)); }
	inline Color_t2020392075  get_color_1() const { return ___color_1; }
	inline Color_t2020392075 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t2020392075  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_survivedTime_2() { return static_cast<int32_t>(offsetof(PlanetResult_t2629313305, ___survivedTime_2)); }
	inline float get_survivedTime_2() const { return ___survivedTime_2; }
	inline float* get_address_of_survivedTime_2() { return &___survivedTime_2; }
	inline void set_survivedTime_2(float value)
	{
		___survivedTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CendMassU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlanetResult_t2629313305, ___U3CendMassU3Ek__BackingField_3)); }
	inline float get_U3CendMassU3Ek__BackingField_3() const { return ___U3CendMassU3Ek__BackingField_3; }
	inline float* get_address_of_U3CendMassU3Ek__BackingField_3() { return &___U3CendMassU3Ek__BackingField_3; }
	inline void set_U3CendMassU3Ek__BackingField_3(float value)
	{
		___U3CendMassU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: PlanetResult
struct PlanetResult_t2629313305_marshaled_pinvoke
{
	GameObject_t1756533147 * ___planet_0;
	Color_t2020392075_marshaled_pinvoke ___color_1;
	float ___survivedTime_2;
	float ___U3CendMassU3Ek__BackingField_3;
};
// Native definition for marshalling of: PlanetResult
struct PlanetResult_t2629313305_marshaled_com
{
	GameObject_t1756533147 * ___planet_0;
	Color_t2020392075_marshaled_com ___color_1;
	float ___survivedTime_2;
	float ___U3CendMassU3Ek__BackingField_3;
};
