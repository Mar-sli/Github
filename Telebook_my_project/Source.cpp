#include <iostream>
#include "Date.h"
#include"Address.h"
#include "Workplace.h"
#include"Person.h"

using namespace std;





int main()
{
	cout << "Dane osobowe: " << endl; // Personal data
	cout << endl;

	Person();
	cout << "--------------------------------" << endl;

	cout << "Miejsce pracy:" << endl; // Workplace

	cout << endl;
	Workplace();
	cout <<"--------------------------------"<< endl;

	cout << "Adres zamieszkania: " << endl; // Address
	cout << endl;

	Address();
	cout << "--------------------------------" << endl;


	//I wish to add some function which will gather all of the data first and then it will display it...

	//I need to terminate my programm when i put wrong data in "day" or "month"

	
	

	system("pause");
	return 0;
}


// Author's note:

// Date i Address s¹ funkcjami, poniewa¿ znajduj¹ siê w innych konstruktorach.
// czyli w Person(); i Workplace();


// Date() - nie mogê zrobiæ tak, aby program wy³¹czy³ siê po wpisanych z³ych danych w dacie :/


//Napisana funkcja Result dla ka¿dego konstruktora.