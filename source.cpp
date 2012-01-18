// Kevin Mangan
// CSII Inheritance Lab
// source.cpp
#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
using namespace std;

int TwoDayPackage::calculateCost(){

	return ounces*costPerOunce+flatFee;

}

void TwoDayPackage::print(){

	int cost = calculateCost();

	cout << "\n\tHere is your receipt: " << endl << endl << endl;
	cout << "\n\t\tSender Name: " << sName << endl;
	cout << "\n\t\tSender Address: " << sAddress << endl;
	cout << "\n\t\tSender City " << sCity << endl;
	cout << "\n\t\tSender State: " << sState << endl;
	cout << "\n\t\tSender Zip Code: " << sZip << endl << endl;
	cout << "\n\t\tRecipient Name: " << rName << endl;
        cout << "\n\t\tRecipient Address: " << rAddress << endl;
        cout << "\n\t\tRecipient City " << rCity << endl;
        cout << "\n\t\tRecipient State: " << rState << endl;
        cout << "\n\t\tRecipient Zip Code: " << rZip << endl << endl;
	cout << "\n\t\tPackage weight: " << ounces << " ounces" << endl;
	cout << "\n\t\tPackage cost: $" << cost << endl;

}


int OverNightPackage::calculateCost(){

        return (ounces*costPerOunce)+(additionalFee*ounces);

        
}



void OverNightPackage::print(){

        int cost = calculateCost();
        
        cout << "\n\tHere is your receipt: " << endl << endl << endl;
        cout << "\n\t\tSender Name: " << sName << endl;
        cout << "\n\t\tSender Address: " << sAddress << endl;
        cout << "\n\t\tSender City " << sCity << endl;
        cout << "\n\t\tSender State: " << sState << endl;
        cout << "\n\t\tSender Zip Code: " << sZip << endl << endl;
        cout << "\n\t\tRecipient Name: " << rName << endl;
        cout << "\n\t\tRecipient Address: " << rAddress << endl;
        cout << "\n\t\tRecipient City " << rCity << endl;
        cout << "\n\t\tRecipient State: " << rState << endl;
        cout << "\n\t\tRecipient Zip Code: " << rZip << endl << endl;
        cout << "\n\t\tPackage weight: " << ounces << " ounces" << endl;
        cout << "\n\t\tPackage cost: $" << cost << endl;

}


void TwoDayPackage::setData(string sNamee, string sAddresss, string sCityy, string sStatee, string sZipp, string rNamee, string rAddresss, string rCityy, string rStatee, string rZipp){

	sName = sNamee;
	sAddress = sAddresss;
	sCity = sCityy;
	sState = sStatee;
	sZip = sZipp;
	rName = rNamee;
	rAddress = rAddresss;
	rCity = rCityy;
	rState = rStatee;
	rZip = rZipp;
}

void OverNightPackage::setData(string sNamee, string sAddresss, string sCityy, string sStatee, string sZipp, string rNamee, string rAddresss, string rCityy, string rStatee, string rZipp){

        sName = sNamee;
        sAddress = sAddresss;
        sCity = sCityy;
        sState = sStatee;
        sZip = sZipp;
        rName = rNamee;
        rAddress = rAddresss;
        rCity = rCityy;
        rState = rStatee;
        rZip = rZipp;
}
