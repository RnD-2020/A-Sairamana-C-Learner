/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
int octalToHexadecimal(long int num)
{
	if (num <= 0)
	{
		return 0;
	}
	long int temp = num, i = 0, dec = 0;
	while (temp > 0)//converting octal number in to decimal
	{
		dec += temp % 10 * pow(8, i);
		temp = temp / 10;
		i++;
	}
	i = 0;
	while (dec >= 16)//coverting decimal to hexadecimal
	{
		temp += dec % 16 * pow(10, i);
		dec = dec / 16;
		i++;
	}
	temp += dec * pow(10, i);
	return temp;
}

float octalToHexadecimalFraction(float num)
{
	return 0.0;
}