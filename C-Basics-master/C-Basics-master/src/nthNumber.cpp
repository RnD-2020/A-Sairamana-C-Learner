/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	int f = 0, s = 1, temp,i;
	if (n < 1)
	{
		return -1;
	}
	if (n == 1)
	{
		return f;
	}
	if (n == 2)
	{
		return s;
	}
	for (i = 3; i <= n; i++)
	{
		temp = f + s;
		f = s;
		s = temp;
	}
	return temp;
}


int isprime(int n)
{
	int i, factors=0;
	for (i = 2; i < n ; i++)
	{
		if (n%i == 0)
		{
			factors = factors + 1;
		}
	}
	if (factors == 0)
	{
		return 1;
	}
	return 0;
}

int nthPrime(int num)
{
	int i,temp,j=0;
	if (num <= 1)
	{
		return -1;
	}
	for (i = 2; i <= 15* num; i++)
	{
		if (isprime(i))
		{
			j = j + 1;
			if (j == num)
			{
				temp = i;
				break;
			}
		}
	}
	return temp;
}