#include "Common/Common.h"

#include "Include/Pointage.h"

#include <Windows.h>
#include <iostream>


namespace Pointage {

	bool POINTAGE_API Initialize()
	{
		std::cout << "[Pointage] Initialized Complete!" << std::endl;
        OutputDebugString(L"[Pointage] Initialized Complete!");
		return true;
	}

	void ATest::Init()
	{
		std::cout << "[Pointage] ATest Initialized Complete!" << std::endl;
        OutputDebugString(L"[Pointage] ATest Initialized Complete!");
	}

}