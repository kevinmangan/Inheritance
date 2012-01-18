// Kevin Mangan
// CSII Inheritance Lab
// OverNightPackage.h header file

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"


class OverNightPackage : public Package{

       public:

                // Constructor
                OverNightPackage(int fee, int ouncess, int cost) :Package(ouncess, cost){
                        additionalFee = fee;
                }

                // Overwritten virtual functions
                virtual int calculateCost();
                virtual void print();
		virtual void setData(string, string, string, string, string, string, string, string, string, string);
	
                int additionalFee;




};









#endif
