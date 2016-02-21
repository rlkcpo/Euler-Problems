//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 3                                     //
//June 2015                                     //
//**********************************************//

#include <iostream>

using namespace std;

long long isPrime(long long x)
{
	if (x % 2 == 0)
	{
		return 0; //its even so not prime
	}
	for (long long i = 3; i <= ((x / 2) + 1); i += 2) //this will only look at the odd numbers of our input.
	{
		if (x % i == 0)
		{
			return 0; //found a divisor and not prime
		}
	}
	return 1; //the number is prime
}

long long greatestPrime(long long x)
{
	long long factor = 0;
	for (long long i = 3; i <= x; i += 2) //again skipping even numbers
	{
		if (x % i == 0) //determine divisiability
		{
			if (isPrime(i)) //determine if prime
			{
				factor = i;
				cout << factor << "\n"; //print to console
			}
		}
	}
	return factor;
}

int main()
{
	long long number = 600851475143;
	cout << greatestPrime(number);
	system("pause");
	return 0;
}