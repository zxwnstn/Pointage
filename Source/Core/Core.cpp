#include "Common/Common.h"

#include "Include/Pointage.h"

#include <iostream>


namespace Pointage {

	bool POINTAGE_API Initialize()
	{
		std::cout << "Initialized Complete!" << std::endl;

		return true;
	}

	void ATest::Init()
	{
		std::cout << "Initialized Complete!" << std::endl;
	}

}