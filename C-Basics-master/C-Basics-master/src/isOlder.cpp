/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int length(char *dob)
{
	int i;
	for (i = 0; dob[i] != '\0'; i++);
	return i;
}
int valid(char *dob,int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (dob[i] == 'A' || dob[i] == 'B' || dob[i] == 'C' || dob[i] == 'D' || dob[i] == 'E' || dob[i] == 'F' || dob[i] == 'G' || dob[i] == 'H' || dob[i] == 'I' || dob[i] == 'J' || dob[i] == 'K' || dob[i] == 'L' || dob[i] == 'M' || dob[i] == 'N' || dob[i] == 'O' || dob[i] == 'P' || dob[i] == 'Q' || dob[i] == 'R' || dob[i] == 'S' || dob[i] == 'T' || dob[i] == 'U' || dob[i] == 'V' || dob[i] == 'X' || dob[i] == 'Y' || dob[i] == 'Z')
		{
			return -1;
		}
	}
	return 1;
}

int isOlder(char *dob1, char *dob2) {
	int i,m,n;
	m = length(dob1);
	n = length(dob1);
	if (m != n)
	{
		return -1;
	}
	m = valid(dob1,m);
	n = valid(dob2,n);
	if (m==-1||n==-1)
	{
		return -1;
	}
	for (i = 6; i<=10; i++)
	{
		if (dob1[i] > dob2[i])
		{
			return 1;
		}
		if (dob1[i] == dob2[i])
		{
			return 0;
		}
	}
	for(i=3;i<5;i++)
	{
		if (dob1[i] > dob2[i])
		{
			return 0;
		}
		if (dob1[i] == dob2[i])
		{
			return 1;
		}
	}
	for (i = 0; i <= 2; i++)
	{
		if (dob1[i] > dob2[i])
		{
			return 1;
		}
		if (dob1[i] == dob2[i])
		{
			return 0;
		}
	}
	return 2;
}