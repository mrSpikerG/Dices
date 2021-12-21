#include <iostream>
#pragma once
class c_Dice
{
private:
	int value;
public:

	c_Dice() {
		this->value = 1+rand()%6;
	}

	void setValue(int value) {
		this->value = value;
	}
	int getValue() {
		return value;
	}

	friend std::ostream& operator<<(std::ostream& out,const c_Dice& dice) {
		out << "\nValue: " << dice.value << "\n";
		return out;
	}

};

