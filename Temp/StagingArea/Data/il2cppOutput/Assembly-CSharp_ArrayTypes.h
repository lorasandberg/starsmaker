#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_PlanetResult2629313305.h"

#pragma once
// PlanetResult[]
struct PlanetResultU5BU5D_t2586171492  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PlanetResult_t2629313305  m_Items[1];

public:
	inline PlanetResult_t2629313305  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PlanetResult_t2629313305 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PlanetResult_t2629313305  value)
	{
		m_Items[index] = value;
	}
};
