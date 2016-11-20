#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// StellarObjectController
struct StellarObjectController_t1920208026;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleSystemController
struct  ParticleSystemController_t2688799463  : public MonoBehaviour_t1158329972
{
public:
	// System.Double ParticleSystemController::bodyFormDistance
	double ___bodyFormDistance_2;
	// System.Int32 ParticleSystemController::aliveParticles
	int32_t ___aliveParticles_3;
	// UnityEngine.ParticleSystem ParticleSystemController::myParticleSystem
	ParticleSystem_t3394631041 * ___myParticleSystem_4;
	// UnityEngine.ParticleSystem/Particle[] ParticleSystemController::particles
	ParticleU5BU5D_t574222242* ___particles_5;
	// StellarObjectController ParticleSystemController::stellars
	StellarObjectController_t1920208026 * ___stellars_6;
	// UnityEngine.Vector3 ParticleSystemController::addBodyLocation
	Vector3_t2243707580  ___addBodyLocation_7;
	// System.Boolean ParticleSystemController::addBodyScheduled
	bool ___addBodyScheduled_8;
	// System.Double ParticleSystemController::bodyFormDistanceSqr
	double ___bodyFormDistanceSqr_9;
	// System.Single ParticleSystemController::collideDistance
	float ___collideDistance_10;
	// System.Boolean ParticleSystemController::timeStopped
	bool ___timeStopped_11;
	// System.Boolean ParticleSystemController::mouseOnGUI
	bool ___mouseOnGUI_12;
	// System.Single ParticleSystemController::tooFar
	float ___tooFar_13;

public:
	inline static int32_t get_offset_of_bodyFormDistance_2() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___bodyFormDistance_2)); }
	inline double get_bodyFormDistance_2() const { return ___bodyFormDistance_2; }
	inline double* get_address_of_bodyFormDistance_2() { return &___bodyFormDistance_2; }
	inline void set_bodyFormDistance_2(double value)
	{
		___bodyFormDistance_2 = value;
	}

	inline static int32_t get_offset_of_aliveParticles_3() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___aliveParticles_3)); }
	inline int32_t get_aliveParticles_3() const { return ___aliveParticles_3; }
	inline int32_t* get_address_of_aliveParticles_3() { return &___aliveParticles_3; }
	inline void set_aliveParticles_3(int32_t value)
	{
		___aliveParticles_3 = value;
	}

	inline static int32_t get_offset_of_myParticleSystem_4() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___myParticleSystem_4)); }
	inline ParticleSystem_t3394631041 * get_myParticleSystem_4() const { return ___myParticleSystem_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_myParticleSystem_4() { return &___myParticleSystem_4; }
	inline void set_myParticleSystem_4(ParticleSystem_t3394631041 * value)
	{
		___myParticleSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___myParticleSystem_4, value);
	}

	inline static int32_t get_offset_of_particles_5() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___particles_5)); }
	inline ParticleU5BU5D_t574222242* get_particles_5() const { return ___particles_5; }
	inline ParticleU5BU5D_t574222242** get_address_of_particles_5() { return &___particles_5; }
	inline void set_particles_5(ParticleU5BU5D_t574222242* value)
	{
		___particles_5 = value;
		Il2CppCodeGenWriteBarrier(&___particles_5, value);
	}

	inline static int32_t get_offset_of_stellars_6() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___stellars_6)); }
	inline StellarObjectController_t1920208026 * get_stellars_6() const { return ___stellars_6; }
	inline StellarObjectController_t1920208026 ** get_address_of_stellars_6() { return &___stellars_6; }
	inline void set_stellars_6(StellarObjectController_t1920208026 * value)
	{
		___stellars_6 = value;
		Il2CppCodeGenWriteBarrier(&___stellars_6, value);
	}

	inline static int32_t get_offset_of_addBodyLocation_7() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___addBodyLocation_7)); }
	inline Vector3_t2243707580  get_addBodyLocation_7() const { return ___addBodyLocation_7; }
	inline Vector3_t2243707580 * get_address_of_addBodyLocation_7() { return &___addBodyLocation_7; }
	inline void set_addBodyLocation_7(Vector3_t2243707580  value)
	{
		___addBodyLocation_7 = value;
	}

	inline static int32_t get_offset_of_addBodyScheduled_8() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___addBodyScheduled_8)); }
	inline bool get_addBodyScheduled_8() const { return ___addBodyScheduled_8; }
	inline bool* get_address_of_addBodyScheduled_8() { return &___addBodyScheduled_8; }
	inline void set_addBodyScheduled_8(bool value)
	{
		___addBodyScheduled_8 = value;
	}

	inline static int32_t get_offset_of_bodyFormDistanceSqr_9() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___bodyFormDistanceSqr_9)); }
	inline double get_bodyFormDistanceSqr_9() const { return ___bodyFormDistanceSqr_9; }
	inline double* get_address_of_bodyFormDistanceSqr_9() { return &___bodyFormDistanceSqr_9; }
	inline void set_bodyFormDistanceSqr_9(double value)
	{
		___bodyFormDistanceSqr_9 = value;
	}

	inline static int32_t get_offset_of_collideDistance_10() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___collideDistance_10)); }
	inline float get_collideDistance_10() const { return ___collideDistance_10; }
	inline float* get_address_of_collideDistance_10() { return &___collideDistance_10; }
	inline void set_collideDistance_10(float value)
	{
		___collideDistance_10 = value;
	}

	inline static int32_t get_offset_of_timeStopped_11() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___timeStopped_11)); }
	inline bool get_timeStopped_11() const { return ___timeStopped_11; }
	inline bool* get_address_of_timeStopped_11() { return &___timeStopped_11; }
	inline void set_timeStopped_11(bool value)
	{
		___timeStopped_11 = value;
	}

	inline static int32_t get_offset_of_mouseOnGUI_12() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___mouseOnGUI_12)); }
	inline bool get_mouseOnGUI_12() const { return ___mouseOnGUI_12; }
	inline bool* get_address_of_mouseOnGUI_12() { return &___mouseOnGUI_12; }
	inline void set_mouseOnGUI_12(bool value)
	{
		___mouseOnGUI_12 = value;
	}

	inline static int32_t get_offset_of_tooFar_13() { return static_cast<int32_t>(offsetof(ParticleSystemController_t2688799463, ___tooFar_13)); }
	inline float get_tooFar_13() const { return ___tooFar_13; }
	inline float* get_address_of_tooFar_13() { return &___tooFar_13; }
	inline void set_tooFar_13(float value)
	{
		___tooFar_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
