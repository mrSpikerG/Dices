#include <iostream>
#include "c_SetOfDice.h"
int main()
{
	srand(time(0));

	//class Dice
	c_Dice* dice = new c_Dice();

	//operator <<
	std::cout << dice;

	//class set of Dice
	int size;
	std::cout << "\nВведите кол-во кубиков: ";
	std::cin >> size;
	c_SetOfDice* DiceSet = new c_SetOfDice(size);

	// operator << []
	std::cout<<DiceSet<<"\n\n";
	//std::cout << DiceSet[0]<<"\n";
	
	//Sum of set
	std::cout << DiceSet->sumDices();

}

