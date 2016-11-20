#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// GameColors
struct GameColors_t1153883414;
// StellarObjectController
struct StellarObjectController_t1920208026;
// ParticleSystemController
struct ParticleSystemController_t2688799463;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// myGUI
struct  myGUI_t3018007293  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip myGUI::victoryAudio
	AudioClip_t1932558630 * ___victoryAudio_2;
	// System.Boolean myGUI::victoryAudioPlaying
	bool ___victoryAudioPlaying_3;
	// UnityEngine.AudioSource[] myGUI::myAudio
	AudioSourceU5BU5D_t1873220070* ___myAudio_4;
	// UnityEngine.Texture2D myGUI::barTexture
	Texture2D_t3542995729 * ___barTexture_5;
	// UnityEngine.Texture2D myGUI::defeatBarTexture
	Texture2D_t3542995729 * ___defeatBarTexture_6;
	// UnityEngine.Texture2D myGUI::cross
	Texture2D_t3542995729 * ___cross_7;
	// GameColors myGUI::myColors
	GameColors_t1153883414 * ___myColors_8;
	// StellarObjectController myGUI::stellars
	StellarObjectController_t1920208026 * ___stellars_9;
	// ParticleSystemController myGUI::myParticleSystemController
	ParticleSystemController_t2688799463 * ___myParticleSystemController_10;
	// System.Int32 myGUI::gameLength
	int32_t ___gameLength_11;
	// System.Boolean myGUI::timeOut
	bool ___timeOut_12;

public:
	inline static int32_t get_offset_of_victoryAudio_2() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___victoryAudio_2)); }
	inline AudioClip_t1932558630 * get_victoryAudio_2() const { return ___victoryAudio_2; }
	inline AudioClip_t1932558630 ** get_address_of_victoryAudio_2() { return &___victoryAudio_2; }
	inline void set_victoryAudio_2(AudioClip_t1932558630 * value)
	{
		___victoryAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___victoryAudio_2, value);
	}

	inline static int32_t get_offset_of_victoryAudioPlaying_3() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___victoryAudioPlaying_3)); }
	inline bool get_victoryAudioPlaying_3() const { return ___victoryAudioPlaying_3; }
	inline bool* get_address_of_victoryAudioPlaying_3() { return &___victoryAudioPlaying_3; }
	inline void set_victoryAudioPlaying_3(bool value)
	{
		___victoryAudioPlaying_3 = value;
	}

	inline static int32_t get_offset_of_myAudio_4() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___myAudio_4)); }
	inline AudioSourceU5BU5D_t1873220070* get_myAudio_4() const { return ___myAudio_4; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_myAudio_4() { return &___myAudio_4; }
	inline void set_myAudio_4(AudioSourceU5BU5D_t1873220070* value)
	{
		___myAudio_4 = value;
		Il2CppCodeGenWriteBarrier(&___myAudio_4, value);
	}

	inline static int32_t get_offset_of_barTexture_5() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___barTexture_5)); }
	inline Texture2D_t3542995729 * get_barTexture_5() const { return ___barTexture_5; }
	inline Texture2D_t3542995729 ** get_address_of_barTexture_5() { return &___barTexture_5; }
	inline void set_barTexture_5(Texture2D_t3542995729 * value)
	{
		___barTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___barTexture_5, value);
	}

	inline static int32_t get_offset_of_defeatBarTexture_6() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___defeatBarTexture_6)); }
	inline Texture2D_t3542995729 * get_defeatBarTexture_6() const { return ___defeatBarTexture_6; }
	inline Texture2D_t3542995729 ** get_address_of_defeatBarTexture_6() { return &___defeatBarTexture_6; }
	inline void set_defeatBarTexture_6(Texture2D_t3542995729 * value)
	{
		___defeatBarTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___defeatBarTexture_6, value);
	}

	inline static int32_t get_offset_of_cross_7() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___cross_7)); }
	inline Texture2D_t3542995729 * get_cross_7() const { return ___cross_7; }
	inline Texture2D_t3542995729 ** get_address_of_cross_7() { return &___cross_7; }
	inline void set_cross_7(Texture2D_t3542995729 * value)
	{
		___cross_7 = value;
		Il2CppCodeGenWriteBarrier(&___cross_7, value);
	}

	inline static int32_t get_offset_of_myColors_8() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___myColors_8)); }
	inline GameColors_t1153883414 * get_myColors_8() const { return ___myColors_8; }
	inline GameColors_t1153883414 ** get_address_of_myColors_8() { return &___myColors_8; }
	inline void set_myColors_8(GameColors_t1153883414 * value)
	{
		___myColors_8 = value;
		Il2CppCodeGenWriteBarrier(&___myColors_8, value);
	}

	inline static int32_t get_offset_of_stellars_9() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___stellars_9)); }
	inline StellarObjectController_t1920208026 * get_stellars_9() const { return ___stellars_9; }
	inline StellarObjectController_t1920208026 ** get_address_of_stellars_9() { return &___stellars_9; }
	inline void set_stellars_9(StellarObjectController_t1920208026 * value)
	{
		___stellars_9 = value;
		Il2CppCodeGenWriteBarrier(&___stellars_9, value);
	}

	inline static int32_t get_offset_of_myParticleSystemController_10() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___myParticleSystemController_10)); }
	inline ParticleSystemController_t2688799463 * get_myParticleSystemController_10() const { return ___myParticleSystemController_10; }
	inline ParticleSystemController_t2688799463 ** get_address_of_myParticleSystemController_10() { return &___myParticleSystemController_10; }
	inline void set_myParticleSystemController_10(ParticleSystemController_t2688799463 * value)
	{
		___myParticleSystemController_10 = value;
		Il2CppCodeGenWriteBarrier(&___myParticleSystemController_10, value);
	}

	inline static int32_t get_offset_of_gameLength_11() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___gameLength_11)); }
	inline int32_t get_gameLength_11() const { return ___gameLength_11; }
	inline int32_t* get_address_of_gameLength_11() { return &___gameLength_11; }
	inline void set_gameLength_11(int32_t value)
	{
		___gameLength_11 = value;
	}

	inline static int32_t get_offset_of_timeOut_12() { return static_cast<int32_t>(offsetof(myGUI_t3018007293, ___timeOut_12)); }
	inline bool get_timeOut_12() const { return ___timeOut_12; }
	inline bool* get_address_of_timeOut_12() { return &___timeOut_12; }
	inline void set_timeOut_12(bool value)
	{
		___timeOut_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
