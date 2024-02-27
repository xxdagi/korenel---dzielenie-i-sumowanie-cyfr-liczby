// Dzielnie liczby na cyfry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num; //liczba podana przez u¿ytkownika
	int sum = 0; //suma cyfr liczby
	
	cout << "Podaj liczbe:"; cin >> num;

	int tmp = num; //nowa zmienna, zeby nie zmieniac wartosci num

	while (true) //dzielenie liczby dopoki reszta z dzielenia daje reszte, ktora dodajemy do sum - stad jest suma cyfr
	{
		if (tmp != 0) //dodaje reszte i dzieli dopoki tmp nie bedzie zerem
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		else //przerwanie dzielenia
			break;
	}

	cout << "Suma cyfr:" << " " << sum << endl;

	int loop = sum;

	if (loop >= 10)
	{
		cout << "Suma cyfr liczby jest wieksza lub rowna  10." << endl;
	}
	else
	{
		while (loop + sum < 10)
			loop += sum;

		cout << "Wynik koncowy:" << " " << loop << endl;
	}
	return 0;

	//Sprawdz czy ci rzeczywiscie dziala, nie wiem jakiej dokladnosci wymaga od was - czy nie bedzie 
	//problemu ze za duzo zmiennych tu dalam (jak co w chacie sprwadz). te napis pod int loop = sum, dalam zeby bylo przejrzyste
	//zmodyfikuj to wedlug sb, elo
}
