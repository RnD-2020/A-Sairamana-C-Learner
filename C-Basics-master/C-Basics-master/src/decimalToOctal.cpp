/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>

int decimalToOctal(int num)
{
	if (num <= 0)
	{
		return 0;
	}
	int a[20], temp = num, i =  0; 
	while (temp >= 8)
	{
		a[i] = temp % 8;
		i++;
		temp=temp / 8;
	}
	a[i] = temp;
	temp = 0;
	for (i; i >= 0; i--)
	{
		temp = temp + a[i] * pow(10, i);
	}

	return temp;
}

float decimalToOctalFraction(float num)
{
	return 0.0;
}

