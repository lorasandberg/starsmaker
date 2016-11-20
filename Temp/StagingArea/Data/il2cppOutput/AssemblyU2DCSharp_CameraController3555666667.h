#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera CameraController::gameCamera
	Camera_t189460977 * ___gameCamera_2;
	// System.Single CameraController::distanceFromPlane
	float ___distanceFromPlane_3;
	// System.Single CameraController::maxDistance
	float ___maxDistance_4;
	// System.Single CameraController::minDistance
	float ___minDistance_5;
	// System.Single CameraController::desiredScrollPosition
	float ___desiredScrollPosition_6;
	// UnityEngine.Vector3 CameraController::desiredPosition
	Vector3_t2243707580  ___desiredPosition_7;
	// UnityEngine.Vector3 CameraController::initialPosition
	Vector3_t2243707580  ___initialPosition_8;

public:
	inline static int32_t get_offset_of_gameCamera_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___gameCamera_2)); }
	inline Camera_t189460977 * get_gameCamera_2() const { return ___gameCamera_2; }
	inline Camera_t189460977 ** get_address_of_gameCamera_2() { return &___gameCamera_2; }
	inline void set_gameCamera_2(Camera_t189460977 * value)
	{
		___gameCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameCamera_2, value);
	}

	inline static int32_t get_offset_of_distanceFromPlane_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___distanceFromPlane_3)); }
	inline float get_distanceFromPlane_3() const { return ___distanceFromPlane_3; }
	inline float* get_address_of_distanceFromPlane_3() { return &___distanceFromPlane_3; }
	inline void set_distanceFromPlane_3(float value)
	{
		___distanceFromPlane_3 = value;
	}

	inline static int32_t get_offset_of_maxDistance_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___maxDistance_4)); }
	inline float get_maxDistance_4() const { return ___maxDistance_4; }
	inline float* get_address_of_maxDistance_4() { return &___maxDistance_4; }
	inline void set_maxDistance_4(float value)
	{
		___maxDistance_4 = value;
	}

	inline static int32_t get_offset_of_minDistance_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___minDistance_5)); }
	inline float get_minDistance_5() const { return ___minDistance_5; }
	inline float* get_address_of_minDistance_5() { return &___minDistance_5; }
	inline void set_minDistance_5(float value)
	{
		___minDistance_5 = value;
	}

	inline static int32_t get_offset_of_desiredScrollPosition_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___desiredScrollPosition_6)); }
	inline float get_desiredScrollPosition_6() const { return ___desiredScrollPosition_6; }
	inline float* get_address_of_desiredScrollPosition_6() { return &___desiredScrollPosition_6; }
	inline void set_desiredScrollPosition_6(float value)
	{
		___desiredScrollPosition_6 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___desiredPosition_7)); }
	inline Vector3_t2243707580  get_desiredPosition_7() const { return ___desiredPosition_7; }
	inline Vector3_t2243707580 * get_address_of_desiredPosition_7() { return &___desiredPosition_7; }
	inline void set_desiredPosition_7(Vector3_t2243707580  value)
	{
		___desiredPosition_7 = value;
	}

	inline static int32_t get_offset_of_initialPosition_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___initialPosition_8)); }
	inline Vector3_t2243707580  get_initialPosition_8() const { return ___initialPosition_8; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_8() { return &___initialPosition_8; }
	inline void set_initialPosition_8(Vector3_t2243707580  value)
	{
		___initialPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
