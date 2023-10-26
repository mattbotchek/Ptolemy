#include "device.h"

Device::Device(int r, std::string mAddress)
{
	rssi = r;
	macAddress = mAddress;
}

Device::Device(Device& source)
{
	Copy(source);
}

Device& Device::operator=(Device& source)
{
	Copy(source);
	return *this;
}

void Device::Copy(Device& source)
{
	rssi = source.rssi;
	macAddress = source.macAddress;
}


