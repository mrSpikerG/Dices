#include <iostream>
#include <string>
#include <time.h>
#include "c_SetOfDice.h"
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	////class Dice
	//c_Dice* dice = new c_Dice();

	////operator <<
	//cout <<"1 Dice " << *dice;


	string name1;
	cout << "Введите имя первого игрока: ";
	getline(cin, name1);

	string name2;
	cout << "Введите имя второго игрока: ";
	getline(cin, name2);

	//class set of Dice
	int size;
	cout << "\nВведите кол-во кубиков: ";
	cin >> size;

	cout << "\n" << name1 << ": ";
	c_SetOfDice* DiceSet1 = new c_SetOfDice(size);
	cout << *DiceSet1;
	cout << "\nSum: " << DiceSet1->sumDices();


	cout << "\n\n" << name2 << ": ";
	c_SetOfDice* DiceSet2 = new c_SetOfDice(size);
	cout << *DiceSet2;
	cout << "\nSum: " << DiceSet2->sumDices();


	cout << "\n\nWinner: ";
	if (DiceSet1->sumDices() > DiceSet2->sumDices()) { cout << name1; }
	else {
		if (DiceSet1->sumDices() == DiceSet2->sumDices()) {
			cout << "None";
		}
		else {
			cout << name2;
		}
	}

}

