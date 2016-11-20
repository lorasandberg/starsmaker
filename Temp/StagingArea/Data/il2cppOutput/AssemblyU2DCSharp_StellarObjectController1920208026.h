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
// GameColors
struct GameColors_t1153883414;
// ResultsScreenController
struct ResultsScreenController_t29175810;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<PlanetResult>
struct List_1_t1998434437;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>
struct Dictionary_2_t1111888080;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StellarObjectController
struct  StellarObjectController_t1920208026  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 StellarObjectController::addedBodies
	int32_t ___addedBodies_2;
	// UnityEngine.GameObject StellarObjectController::prefab
	GameObject_t1756533147 * ___prefab_3;
	// UnityEngine.GameObject StellarObjectController::sunPrefab
	GameObject_t1756533147 * ___sunPrefab_4;
	// GameColors StellarObjectController::myColors
	GameColors_t1153883414 * ___myColors_5;
	// ResultsScreenController StellarObjectController::resultsScreen
	ResultsScreenController_t29175810 * ___resultsScreen_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> StellarObjectController::stellarObjects
	List_1_t1125654279 * ___stellarObjects_7;
	// System.Collections.Generic.List`1<PlanetResult> StellarObjectController::results
	List_1_t1998434437 * ___results_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single> StellarObjectController::desiredScales
	Dictionary_2_t1111888080 * ___desiredScales_9;
	// UnityEngine.AudioSource StellarObjectController::myAudio
	AudioSource_t1135106623 * ___myAudio_10;
	// System.Boolean StellarObjectController::endGame
	bool ___endGame_11;
	// System.Single StellarObjectController::endGameCounter
	float ___endGameCounter_12;

public:
	inline static int32_t get_offset_of_addedBodies_2() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___addedBodies_2)); }
	inline int32_t get_addedBodies_2() const { return ___addedBodies_2; }
	inline int32_t* get_address_of_addedBodies_2() { return &___addedBodies_2; }
	inline void set_addedBodies_2(int32_t value)
	{
		___addedBodies_2 = value;
	}

	inline static int32_t get_offset_of_prefab_3() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___prefab_3)); }
	inline GameObject_t1756533147 * get_prefab_3() const { return ___prefab_3; }
	inline GameObject_t1756533147 ** get_address_of_prefab_3() { return &___prefab_3; }
	inline void set_prefab_3(GameObject_t1756533147 * value)
	{
		___prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_3, value);
	}

	inline static int32_t get_offset_of_sunPrefab_4() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___sunPrefab_4)); }
	inline GameObject_t1756533147 * get_sunPrefab_4() const { return ___sunPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_sunPrefab_4() { return &___sunPrefab_4; }
	inline void set_sunPrefab_4(GameObject_t1756533147 * value)
	{
		___sunPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___sunPrefab_4, value);
	}

	inline static int32_t get_offset_of_myColors_5() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___myColors_5)); }
	inline GameColors_t1153883414 * get_myColors_5() const { return ___myColors_5; }
	inline GameColors_t1153883414 ** get_address_of_myColors_5() { return &___myColors_5; }
	inline void set_myColors_5(GameColors_t1153883414 * value)
	{
		___myColors_5 = value;
		Il2CppCodeGenWriteBarrier(&___myColors_5, value);
	}

	inline static int32_t get_offset_of_resultsScreen_6() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___resultsScreen_6)); }
	inline ResultsScreenController_t29175810 * get_resultsScreen_6() const { return ___resultsScreen_6; }
	inline ResultsScreenController_t29175810 ** get_address_of_resultsScreen_6() { return &___resultsScreen_6; }
	inline void set_resultsScreen_6(ResultsScreenController_t29175810 * value)
	{
		___resultsScreen_6 = value;
		Il2CppCodeGenWriteBarrier(&___resultsScreen_6, value);
	}

	inline static int32_t get_offset_of_stellarObjects_7() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___stellarObjects_7)); }
	inline List_1_t1125654279 * get_stellarObjects_7() const { return ___stellarObjects_7; }
	inline List_1_t1125654279 ** get_address_of_stellarObjects_7() { return &___stellarObjects_7; }
	inline void set_stellarObjects_7(List_1_t1125654279 * value)
	{
		___stellarObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___stellarObjects_7, value);
	}

	inline static int32_t get_offset_of_results_8() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___results_8)); }
	inline List_1_t1998434437 * get_results_8() const { return ___results_8; }
	inline List_1_t1998434437 ** get_address_of_results_8() { return &___results_8; }
	inline void set_results_8(List_1_t1998434437 * value)
	{
		___results_8 = value;
		Il2CppCodeGenWriteBarrier(&___results_8, value);
	}

	inline static int32_t get_offset_of_desiredScales_9() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___desiredScales_9)); }
	inline Dictionary_2_t1111888080 * get_desiredScales_9() const { return ___desiredScales_9; }
	inline Dictionary_2_t1111888080 ** get_address_of_desiredScales_9() { return &___desiredScales_9; }
	inline void set_desiredScales_9(Dictionary_2_t1111888080 * value)
	{
		___desiredScales_9 = value;
		Il2CppCodeGenWriteBarrier(&___desiredScales_9, value);
	}

	inline static int32_t get_offset_of_myAudio_10() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___myAudio_10)); }
	inline AudioSource_t1135106623 * get_myAudio_10() const { return ___myAudio_10; }
	inline AudioSource_t1135106623 ** get_address_of_myAudio_10() { return &___myAudio_10; }
	inline void set_myAudio_10(AudioSource_t1135106623 * value)
	{
		___myAudio_10 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_10, value);
	}

	inline static int32_t get_offset_of_endGame_11() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___endGame_11)); }
	inline bool get_endGame_11() const { return ___endGame_11; }
	inline bool* get_address_of_endGame_11() { return &___endGame_11; }
	inline void set_endGame_11(bool value)
	{
		___endGame_11 = value;
	}

	inline static int32_t get_offset_of_endGameCounter_12() { return static_cast<int32_t>(offsetof(StellarObjectController_t1920208026, ___endGameCounter_12)); }
	inline float get_endGameCounter_12() const { return ___endGameCounter_12; }
	inline float* get_address_of_endGameCounter_12() { return &___endGameCounter_12; }
	inline void set_endGameCounter_12(float value)
	{
		___endGameCounter_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
