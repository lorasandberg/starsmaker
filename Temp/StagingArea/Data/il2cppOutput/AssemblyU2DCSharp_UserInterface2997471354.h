#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ParticleSystemController
struct ParticleSystemController_t2688799463;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInterface
struct  UserInterface_t2997471354  : public MonoBehaviour_t1158329972
{
public:
	// ParticleSystemController UserInterface::psControl
	ParticleSystemController_t2688799463 * ___psControl_2;
	// System.Boolean UserInterface::mousehold
	bool ___mousehold_3;
	// UnityEngine.Rigidbody UserInterface::heldBody
	Rigidbody_t4233889191 * ___heldBody_4;
	// UnityEngine.GameObject UserInterface::heldArrow
	GameObject_t1756533147 * ___heldArrow_5;
	// UnityEngine.GameObject UserInterface::arrowPrefab
	GameObject_t1756533147 * ___arrowPrefab_6;
	// UnityEngine.AudioSource UserInterface::myAudio
	AudioSource_t1135106623 * ___myAudio_7;
	// System.Boolean UserInterface::planetCreatedWithThisMousePress
	bool ___planetCreatedWithThisMousePress_8;

public:
	inline static int32_t get_offset_of_psControl_2() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___psControl_2)); }
	inline ParticleSystemController_t2688799463 * get_psControl_2() const { return ___psControl_2; }
	inline ParticleSystemController_t2688799463 ** get_address_of_psControl_2() { return &___psControl_2; }
	inline void set_psControl_2(ParticleSystemController_t2688799463 * value)
	{
		___psControl_2 = value;
		Il2CppCodeGenWriteBarrier(&___psControl_2, value);
	}

	inline static int32_t get_offset_of_mousehold_3() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___mousehold_3)); }
	inline bool get_mousehold_3() const { return ___mousehold_3; }
	inline bool* get_address_of_mousehold_3() { return &___mousehold_3; }
	inline void set_mousehold_3(bool value)
	{
		___mousehold_3 = value;
	}

	inline static int32_t get_offset_of_heldBody_4() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___heldBody_4)); }
	inline Rigidbody_t4233889191 * get_heldBody_4() const { return ___heldBody_4; }
	inline Rigidbody_t4233889191 ** get_address_of_heldBody_4() { return &___heldBody_4; }
	inline void set_heldBody_4(Rigidbody_t4233889191 * value)
	{
		___heldBody_4 = value;
		Il2CppCodeGenWriteBarrier(&___heldBody_4, value);
	}

	inline static int32_t get_offset_of_heldArrow_5() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___heldArrow_5)); }
	inline GameObject_t1756533147 * get_heldArrow_5() const { return ___heldArrow_5; }
	inline GameObject_t1756533147 ** get_address_of_heldArrow_5() { return &___heldArrow_5; }
	inline void set_heldArrow_5(GameObject_t1756533147 * value)
	{
		___heldArrow_5 = value;
		Il2CppCodeGenWriteBarrier(&___heldArrow_5, value);
	}

	inline static int32_t get_offset_of_arrowPrefab_6() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___arrowPrefab_6)); }
	inline GameObject_t1756533147 * get_arrowPrefab_6() const { return ___arrowPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_arrowPrefab_6() { return &___arrowPrefab_6; }
	inline void set_arrowPrefab_6(GameObject_t1756533147 * value)
	{
		___arrowPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___arrowPrefab_6, value);
	}

	inline static int32_t get_offset_of_myAudio_7() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___myAudio_7)); }
	inline AudioSource_t1135106623 * get_myAudio_7() const { return ___myAudio_7; }
	inline AudioSource_t1135106623 ** get_address_of_myAudio_7() { return &___myAudio_7; }
	inline void set_myAudio_7(AudioSource_t1135106623 * value)
	{
		___myAudio_7 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_7, value);
	}

	inline static int32_t get_offset_of_planetCreatedWithThisMousePress_8() { return static_cast<int32_t>(offsetof(UserInterface_t2997471354, ___planetCreatedWithThisMousePress_8)); }
	inline bool get_planetCreatedWithThisMousePress_8() const { return ___planetCreatedWithThisMousePress_8; }
	inline bool* get_address_of_planetCreatedWithThisMousePress_8() { return &___planetCreatedWithThisMousePress_8; }
	inline void set_planetCreatedWithThisMousePress_8(bool value)
	{
		___planetCreatedWithThisMousePress_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
