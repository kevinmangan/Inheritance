// Kevin Mangan
// CSII Inheritance Lab
// Package.h header file

#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>
using namespace std;

class Package{


	public:

		// Constructor
		Package(int ouncess, int cost){
			ounces = ouncess;
			costPerOunce = cost;
		}

		// Pure Virtual functions
		virtual int calculateCost(){};
		virtual void setData(string, string, string, string, string, string, string, string, string, string){};
		virtual void print(){};		





	protected:

		// Sender information
		string sName;
		string sAddress;
		string sCity;
		string sState;
		string sZip;

		// Recipient information
		string rName;
                string rAddress;
                string rCity;
                string rState;
                string rZip;

		// Package information
		int ounces;
		int costPerOunce;


};

#endif
