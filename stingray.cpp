#include "stingray.h"

Stingray::Stingray()
{
	measuredPower = -69;
	environmentalFactor = 2.5;
}

Stingray::Stingray(int mPower, double eFactor)
{
	measuredPower = mPower;
	environmentalFactor = eFactor;
}

Stingray::Stingray(Stingray& source)
{
	Copy(source);
}

Stingray& Stingray::operator=(Stingray& source)
{
	Copy(source);

	return *this;
}

void Stingray::Copy(Stingray& source)
{
	measuredPower = source.measuredPower;
	environmentalFactor = source.environmentalFactor;

	for (Device x : source.deviceList)
	{
		deviceList.push_back(x);
	}
}

void Stingray::AsyncUpdateDeviceList()
{
	// To be done
}

double Stingray::ConvertRSSIToDistance(int rssi)
{
	// Function: 10^((Measured Power - RSSI) / 10 * Environmental Factor)
	
	double inner = (measuredPower - rssi) / (10 * environmentalFactor);

	double distance = std::pow(10, inner);

	return distance;
}
