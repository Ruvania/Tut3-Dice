#include<iostream>

using namespace std;

//class created
class Dice
{
public:
	Dice();
	int roll();
	float average(Dice, int noRolls);
	float average(int *array, int noArray);
	~Dice();
};

//constructor
Dice::Dice()
{

}

//generates a random number from 1-6
int Dice::roll()
{
	return rand() % 6 = 1;
}

//destructor
Dice::~Dice()
{

}

//finds the average of the rolls of a dice
float average(Dice object, int noRolls)
{
	int i;
	float summation = 0;
	{
		for (i = 0; i <= noRolls; i++)
		{
			summation = summation + object.roll();
		}
		return float(summation / noRolls);
	}
}

//finds the average of an integer array
float average(int array[]; int noArray)
{
	int i;
	float summation = 0;
	{
		for (i = 0; i <= noArray; i++)
		{
			summation = summation + array[i];
		}
		return float(summation/noArray)
	}
}
