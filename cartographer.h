#pragma once

#include "resources.h"

class Cartographer
{
	public:
		Cartographer();
		Cartographer(Cartographer& source);
		Cartographer& operator=(Cartographer& source);

	private:
		uint16_t X_AXIS;
		uint16_t Y_AXIS;
		std::vector<Stingray> stingrays;
		std::vector<Device> devices;
};

