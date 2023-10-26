#pragma once

#include "resources.h"
// The stringray class handles the device that captures RSSI values from devices connected to them, and then 
// performs that actual calculations to convert that RSSI to distance. 

class Stingray
{
	public:
		Stingray();
		Stingray(int mPower, double eFactor);
		Stingray(Stingray& source);
		Stingray& operator=(Stingray& source);

	private:
		void AsyncUpdateDeviceList();
		double ConvertRSSIToDistance(int rssi);

		// Helper functions
		void Copy(Stingray& source);

		int measuredPower; // 1 Meter RSSI 
		double environmentalFactor;
		std::vector<Device> asyncDeviceList;
		std::vector<Device> deviceList;
};

