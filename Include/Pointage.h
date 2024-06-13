#pragma once

#include "Define.h"

NAME_MANGLING_BEGIN

namespace Pointage {

    enum class EGraphicsAPI {
        D3D11,
        D3D12,
        OpenGL
    };

	bool POINTAGE_API Initialize();

	class POINTAGE_API ATest
	{
	public:
		static void Init();
	};

}

NAME_MANGLING_END
