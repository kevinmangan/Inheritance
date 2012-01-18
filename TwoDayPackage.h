// Kevin Mangan
// CSII Inheritance Lab
// TwoDayPackage.h header file

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <iostream>
#include <string>
#include "Package.h"


class TwoDayPackage : public Package{


	public:

		// Constructor
		TwoDayPackage(int fee, int ouncess, int cost) :Package(ouncess, cost){
			flatFee = fee;
		}

		// Overwritten virtual functions
		virtual int calculateCost();
		virtual void print();
		virtual void setData(string, string, string, string, string, string, string, string, string, string);

		int flatFee;




};

#endif
