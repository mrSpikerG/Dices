#include <iostream>
#pragma once
class c_Dice
{
private:
	int value;
public:

	c_Dice() {
		value = rand()%6;
	}

	void setValue(short value) {
		this->value = value;
	}
	short getValue() {
		return value;
	}

	friend std::ostream& operator<<(std::ostream& out, c_Dice dice) {
		out << "\nИмя: " << dice.getValue();
		return out;
	}

};

