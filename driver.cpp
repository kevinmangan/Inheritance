// Kevin Mangan
// CSII Inheritance Lab
// driver.cpp: driver file

#include <iostream>
#include <string>
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
using namespace std;


int main(){

	Package* packages[100];
	float TwoDayCost = 0;
	float OverNightCost = 0;
	int TwoDayCount = 0;
	int OverNightCount = 0;
	char choice, answer;
	int weight, cost;
	string sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip;
	int i = 0;

	while(choice != 'Q'){
		

		cout << "\n\tPlease enter A for Two Day Package or B for Over Night Package: " ;
		cin >> choice;
		cout << "\n\tPlease enter the package weight in ounces: ";
		cin >> weight;
		cout << "\n\tPlease enter the sender name: ";
                cin >> sName;
		cout << "\n\tPlease enter the sender address: ";
                cin >> sAddress;
		cout << "\n\tPlease enter the sender city: ";
                cin >> sCity;
		cout << "\n\tPlease enter the sender state: ";
                cin >> sState;
		cout << "\n\tPlease enter the sender zip code: ";
                cin >> sZip;
		cout << "\n\tPlease enter the recipient name: ";
                cin >> rName;
                cout << "\n\tPlease enter the recipient address: "; 
                cin >> rAddress;
                cout << "\n\tPlease enter the recipient city: ";
                cin >> rCity;
                cout << "\n\tPlease enter the recipient state: ";
                cin >> rState;
                cout << "\n\tPlease enter the recipient zip code: ";
                cin >> rZip;


		if(choice == 'A'){
			packages[i] = new TwoDayPackage(10, weight, 5) ;
			cout << "\n\tThe cost per ounce is $5 and the flat fee is $10" << endl;
			cost = packages[i]->calculateCost();
			TwoDayCost += cost;
			TwoDayCount++;
		}
		else if(choice == 'B'){
			packages[i] = new OverNightPackage(3, weight, 5);
			cout << "\n\tThe cost per ounce is $5 and the additional fee is $3 per ounce" << endl;
			cost = packages[i]->calculateCost();
			OverNightCost += cost;
			OverNightCount++;
		}

		packages[i]->setData(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip);

		cout << "\n\tThe Cost of your package is: $" << packages[i]->calculateCost() << endl;

		i++;

		cout << "\n\tWould you like to quit? (y/n): ";
		cin >> answer;
		cout << endl;
		if(answer == 'y')
			choice = 'Q';

	}//end while

	int numOfPackages = (TwoDayCount + OverNightCount);	

	for(int j = 0; j < numOfPackages; j++){

		packages[j]->print();
		cout << endl << endl;

	}

	cout << "\n\tNumber of Two Day Packages: " << TwoDayCount << endl;
	cout << "\n\tNumber of Over Night Packages: " << OverNightCount << endl;
	cout << "\n\tMoney Generated from Two Day: $" << TwoDayCost << endl;
	cout << "\n\tMoney Generated from Over Night: $ " << OverNightCost << endl << endl << endl;



}//end main
