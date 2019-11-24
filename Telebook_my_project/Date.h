#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	
	int FunkcjaDate()
	{
		

		this->day = day;
		cout << "Podaj dzien: " << endl;   //day
		cin >> day;
		if (day > 31 || day <= 0)
		{
			cout << "Nieprawidlowy dzien!" << endl;  // wrong day!
			return 0;
			//_Exit(0);
			//terminate();
		}
		cout << "Podaj miesisac: " << endl;		//month
		this->month = month;
		cin >> month;
		if (month <= 0 || month > 12)
		{
			cout << "Nieprawidlowy miesiac!" << endl; // wrong month
			return 0;
			//_Exit(0);
			//terminate();
		}
		cout << "Podaj rok: " << endl;	//year
		this->year = year;
		cin >> year;
		
		
		DateResult();
		return day, year, month;

	}
	int FunkcjaBDate()
	{

		this->day = day;
		cout << "Podaj dzien narodzin: " << endl; // day of birth
		cin >> day;
		if (day > 31 || day <= 0)
		{
			cout << "Nieprawidlowy dzien!" << endl; // wrong day
			return 0;
			//_Exit(0);
			//terminate();
		}
		cout << "Podaj miesisac narodzin: " << endl; // month of birth
		this->month = month;
		cin >> month;
		if (month <= 0 || month > 12)
		{
			cout << "Nieprawidlowy miesiac!" << endl; // wrong month
			return 0;
			//_Exit(0);
			//terminate();
		}
		cout << "Podaj rok narodzin: " << endl; // year of birth
		this->year = year;
		cin >> year;

		
		BDateResult();
		return day, year, month;

	}

	void DateResult() // function which displays your data
	{
		cout << endl;
		cout << "Twoja data to: " << day << "." << month << "." << year << endl;
	}
	void BDateResult() // function which displays your data (only for b-day)
	{
		cout << endl;
		cout << "Twoja data narodzin to: " << day << "." << month << "." << year << endl;
	}
};


