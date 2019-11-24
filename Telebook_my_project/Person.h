#pragma once
#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

Date obiektDatePerson;

class Person
{
private:
	string name, surname, e_mail;
	int nr_tel;
public:

	Person()
	{
		cout << "Imie: " << endl;       //name
		this->name = name;
		cin >> name;
		cout << endl;

		cout << "Nazwisko: " << endl;	//surname
		this->surname = surname;
		cin >> surname;
		cout << endl;

		cout << "Adres E-mail: " << endl;	//email address
		this->e_mail = e_mail;
		cin >> e_mail;
		cout << endl;

		cout << "Numer telefonu: " << endl;	//phone number
		this->nr_tel = nr_tel;
		cin >> nr_tel;
		PersonResult();

		cout << endl;

		cout << "Data narodzin: " << endl;	//date of birth
		obiektDatePerson.FunkcjaBDate();




	}

	void PersonResult()			//function which displays the data
	{
		cout <<  endl;
		cout << "Twoje dane:" << endl;
		cout << name << " " << surname << endl;
		cout << e_mail << endl;
		cout << nr_tel << endl;
	}
};


