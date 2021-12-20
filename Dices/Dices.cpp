#include <iostream>
#include <time.h>
#include "c_SetOfDice.h"
using namespace std;
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "");
	//class Dice
	c_Dice* dice = new c_Dice();

	//operator <<
	cout <<"1 Dice " << *dice;

	//class set of Dice
	int size;
	cout << "\nВведите кол-во кубиков: ";
	cin >> size;
	c_SetOfDice* DiceSet = new c_SetOfDice(size);

	// operator << []
	cout<<*DiceSet<<"\n\n";
	
	//Sum of set
	cout << "\nОбщая сумма: "<<DiceSet->sumDices();

}

