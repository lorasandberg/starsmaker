#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleScreenController
struct  TitleScreenController_t3318641990  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button TitleScreenController::startButton
	Button_t2872111280 * ___startButton_2;
	// UnityEngine.UI.Button TitleScreenController::quitButton
	Button_t2872111280 * ___quitButton_3;

public:
	inline static int32_t get_offset_of_startButton_2() { return static_cast<int32_t>(offsetof(TitleScreenController_t3318641990, ___startButton_2)); }
	inline Button_t2872111280 * get_startButton_2() const { return ___startButton_2; }
	inline Button_t2872111280 ** get_address_of_startButton_2() { return &___startButton_2; }
	inline void set_startButton_2(Button_t2872111280 * value)
	{
		___startButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___startButton_2, value);
	}

	inline static int32_t get_offset_of_quitButton_3() { return static_cast<int32_t>(offsetof(TitleScreenController_t3318641990, ___quitButton_3)); }
	inline Button_t2872111280 * get_quitButton_3() const { return ___quitButton_3; }
	inline Button_t2872111280 ** get_address_of_quitButton_3() { return &___quitButton_3; }
	inline void set_quitButton_3(Button_t2872111280 * value)
	{
		___quitButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___quitButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
