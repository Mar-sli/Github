#pragma once
#include <string>
#include <iostream>
#include "Date.h"
#include "Address.h"

using namespace std;


class Workplace
{
private:
	string comp_name, employ_date, comp_address;
	int nip;
public:
	Workplace()
	{
		cout << "-------------------------------" << endl;

		cout << "Wpisz nazwe firmy: " << endl;          //Type in your company name:
		this->comp_name = comp_name;
		cin >> comp_name;

		cout << "Data zatrudnienia: " << endl;        // Date of employment: (when did you start)
		obiekt1.FunkcjaDate();

		cout << "Adres firmy: " << endl;       // Company address
		obiekt2.FunkcjaAddress();

		cout << "Wpisz NIP: " << endl;               //Type in NIP (number your company has and uses in legal issues)
		this->nip = nip;
		cin >> nip;

		cout << "Oto adres Twojej firmy: " << endl;    // This displays your data you put above
		cout << comp_name << endl;
		cout << nip << endl;
		
	}


};
