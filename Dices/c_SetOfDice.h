#include "c_Dice.h"
#pragma once
class c_SetOfDice
{
private:
	int size;
	c_Dice* setOfDice;
public:

	c_SetOfDice(int num) {
		this->size = num;
		setOfDice = new c_Dice[num];
	}

	int sumDices() {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += setOfDice[i].getValue();
		}
		return sum;
	}

	friend std::ostream& operator<<(std::ostream& out, const c_SetOfDice set) {
		for (int i = 0; i < set.size; i++) {
			out << "\nDice(" << i + 1 << "): ";// << set.setOfDice[i].getValue();
		}
		return out;
	}

	c_Dice operator[](int num) {
		return setOfDice[num];
	}


};

