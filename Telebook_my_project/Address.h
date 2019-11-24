#pragma once
#include <string>
#include <iostream>

using namespace std;

class Address
{
private:
	string street, build_nr, loc_nr, post_cod, city;
public:
	string FunkcjaAddress()
	{

		this->street = street;
		cout << "Nazwa ulicy: " << street << endl; //street name
		cin >> street;

		this->build_nr = build_nr;
		cout << "Nr budynku: " << build_nr << endl; // building nr
		cin >> build_nr;

		this->loc_nr = loc_nr;
		cout << "Nr lokalu: " << loc_nr << endl; // local nr 
		cin >> loc_nr;

		this->post_cod = post_cod;
		cout << "Kod pocztowy: " << post_cod << endl;	//postcode
		cin >> post_cod;

		this->city = city;
		cout << "Nazwa miasta: " << city << endl;	//city name
		cin >> city;

		cout <<" " <<endl;

	
		AddressResult();				                                            	
		return street, build_nr, loc_nr, post_cod, city;
		
		

	}

	void AddressResult()									//function which displays your data
	{
		cout << endl;
		cout << "Oto Twoj adres: " << endl;
		cout << street << " " << build_nr << "/" << loc_nr << endl;

		cout << post_cod << " " << city << endl;



	}
	


};
