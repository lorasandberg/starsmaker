#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameColors
struct GameColors_t1153883414;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GameColors::.ctor()
extern "C"  void GameColors__ctor_m2888681151 (GameColors_t1153883414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameColors::Start()
extern "C"  void GameColors_Start_m115164579 (GameColors_t1153883414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GameColors::hexToColor(System.String)
extern "C"  Color_t2020392075  GameColors_hexToColor_m4265807339 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameColors::Update()
extern "C"  void GameColors_Update_m605112896 (GameColors_t1153883414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GameColors::GiveColor(System.Int32)
extern "C"  Color_t2020392075  GameColors_GiveColor_m364648463 (GameColors_t1153883414 * __this, int32_t ___ind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
