#pragma once
#include "resources.h"

// For now this exists as largely just a data class, it could be better in the future to convert to just 
// a struct within stingray, but it may also be prevelant to expand this class in the future. 
// Testing is required
class Device
{
	public:
		Device(int r, std::string mAddress);
		Device(Device& source);
		Device& operator=(Device& source);

	private:
		void Copy(Device& source);

		int rssi;
		double convertedDistance;
		std::string macAddress;
};

