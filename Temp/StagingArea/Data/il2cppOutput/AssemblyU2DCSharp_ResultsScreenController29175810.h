#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<PlanetResult>
struct List_1_t1998434437;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ResultsScreenController_State3904262724.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultsScreenController
struct  ResultsScreenController_t29175810  : public MonoBehaviour_t1158329972
{
public:
	// ResultsScreenController/State ResultsScreenController::state
	int32_t ___state_2;
	// System.Boolean ResultsScreenController::gameOver
	bool ___gameOver_3;
	// System.Single ResultsScreenController::endGameCounter
	float ___endGameCounter_4;
	// System.Single ResultsScreenController::leaveCounter
	float ___leaveCounter_5;
	// UnityEngine.Texture2D ResultsScreenController::gameoverTexture
	Texture2D_t3542995729 * ___gameoverTexture_6;
	// UnityEngine.Texture2D ResultsScreenController::survivalTexture
	Texture2D_t3542995729 * ___survivalTexture_7;
	// UnityEngine.Texture2D ResultsScreenController::massTexture
	Texture2D_t3542995729 * ___massTexture_8;
	// UnityEngine.Texture2D ResultsScreenController::barTexture
	Texture2D_t3542995729 * ___barTexture_9;
	// System.Collections.Generic.List`1<PlanetResult> ResultsScreenController::results
	List_1_t1998434437 * ___results_10;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_gameOver_3() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___gameOver_3)); }
	inline bool get_gameOver_3() const { return ___gameOver_3; }
	inline bool* get_address_of_gameOver_3() { return &___gameOver_3; }
	inline void set_gameOver_3(bool value)
	{
		___gameOver_3 = value;
	}

	inline static int32_t get_offset_of_endGameCounter_4() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___endGameCounter_4)); }
	inline float get_endGameCounter_4() const { return ___endGameCounter_4; }
	inline float* get_address_of_endGameCounter_4() { return &___endGameCounter_4; }
	inline void set_endGameCounter_4(float value)
	{
		___endGameCounter_4 = value;
	}

	inline static int32_t get_offset_of_leaveCounter_5() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___leaveCounter_5)); }
	inline float get_leaveCounter_5() const { return ___leaveCounter_5; }
	inline float* get_address_of_leaveCounter_5() { return &___leaveCounter_5; }
	inline void set_leaveCounter_5(float value)
	{
		___leaveCounter_5 = value;
	}

	inline static int32_t get_offset_of_gameoverTexture_6() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___gameoverTexture_6)); }
	inline Texture2D_t3542995729 * get_gameoverTexture_6() const { return ___gameoverTexture_6; }
	inline Texture2D_t3542995729 ** get_address_of_gameoverTexture_6() { return &___gameoverTexture_6; }
	inline void set_gameoverTexture_6(Texture2D_t3542995729 * value)
	{
		___gameoverTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameoverTexture_6, value);
	}

	inline static int32_t get_offset_of_survivalTexture_7() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___survivalTexture_7)); }
	inline Texture2D_t3542995729 * get_survivalTexture_7() const { return ___survivalTexture_7; }
	inline Texture2D_t3542995729 ** get_address_of_survivalTexture_7() { return &___survivalTexture_7; }
	inline void set_survivalTexture_7(Texture2D_t3542995729 * value)
	{
		___survivalTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___survivalTexture_7, value);
	}

	inline static int32_t get_offset_of_massTexture_8() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___massTexture_8)); }
	inline Texture2D_t3542995729 * get_massTexture_8() const { return ___massTexture_8; }
	inline Texture2D_t3542995729 ** get_address_of_massTexture_8() { return &___massTexture_8; }
	inline void set_massTexture_8(Texture2D_t3542995729 * value)
	{
		___massTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___massTexture_8, value);
	}

	inline static int32_t get_offset_of_barTexture_9() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___barTexture_9)); }
	inline Texture2D_t3542995729 * get_barTexture_9() const { return ___barTexture_9; }
	inline Texture2D_t3542995729 ** get_address_of_barTexture_9() { return &___barTexture_9; }
	inline void set_barTexture_9(Texture2D_t3542995729 * value)
	{
		___barTexture_9 = value;
		Il2CppCodeGenWriteBarrier(&___barTexture_9, value);
	}

	inline static int32_t get_offset_of_results_10() { return static_cast<int32_t>(offsetof(ResultsScreenController_t29175810, ___results_10)); }
	inline List_1_t1998434437 * get_results_10() const { return ___results_10; }
	inline List_1_t1998434437 ** get_address_of_results_10() { return &___results_10; }
	inline void set_results_10(List_1_t1998434437 * value)
	{
		___results_10 = value;
		Il2CppCodeGenWriteBarrier(&___results_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
