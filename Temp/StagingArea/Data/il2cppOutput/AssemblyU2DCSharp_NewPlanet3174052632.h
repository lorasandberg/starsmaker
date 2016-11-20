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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewPlanet
struct  NewPlanet_t3174052632 
{
public:
	// UnityEngine.Vector3 NewPlanet::location
	Vector3_t2243707580  ___location_0;
	// UnityEngine.Vector3 NewPlanet::speed
	Vector3_t2243707580  ___speed_1;
	// System.Single NewPlanet::mass
	float ___mass_2;
	// UnityEngine.GameObject NewPlanet::prefab
	GameObject_t1756533147 * ___prefab_3;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(NewPlanet_t3174052632, ___location_0)); }
	inline Vector3_t2243707580  get_location_0() const { return ___location_0; }
	inline Vector3_t2243707580 * get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(Vector3_t2243707580  value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(NewPlanet_t3174052632, ___speed_1)); }
	inline Vector3_t2243707580  get_speed_1() const { return ___speed_1; }
	inline Vector3_t2243707580 * get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(Vector3_t2243707580  value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_mass_2() { return static_cast<int32_t>(offsetof(NewPlanet_t3174052632, ___mass_2)); }
	inline float get_mass_2() const { return ___mass_2; }
	inline float* get_address_of_mass_2() { return &___mass_2; }
	inline void set_mass_2(float value)
	{
		___mass_2 = value;
	}

	inline static int32_t get_offset_of_prefab_3() { return static_cast<int32_t>(offsetof(NewPlanet_t3174052632, ___prefab_3)); }
	inline GameObject_t1756533147 * get_prefab_3() const { return ___prefab_3; }
	inline GameObject_t1756533147 ** get_address_of_prefab_3() { return &___prefab_3; }
	inline void set_prefab_3(GameObject_t1756533147 * value)
	{
		___prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: NewPlanet
struct NewPlanet_t3174052632_marshaled_pinvoke
{
	Vector3_t2243707580_marshaled_pinvoke ___location_0;
	Vector3_t2243707580_marshaled_pinvoke ___speed_1;
	float ___mass_2;
	GameObject_t1756533147 * ___prefab_3;
};
// Native definition for marshalling of: NewPlanet
struct NewPlanet_t3174052632_marshaled_com
{
	Vector3_t2243707580_marshaled_com ___location_0;
	Vector3_t2243707580_marshaled_com ___speed_1;
	float ___mass_2;
	GameObject_t1756533147 * ___prefab_3;
};
