
//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 5                                     //
//July 2015                                     //
//**********************************************//

#include <iostream>

using namespace std;

//*********************************************//
// not going to re-invent the wheel             //
// this is the prime function I used for       //
// problem #3                                  //
//*********************************************//
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

int main()
{
	int counter = 1; //1 prime already accounted for (2)
	int test_number = 3; //only want to test prime numbers after 2 so we start with 3
	bool flag = true;

	while (flag) //loop condition
	{
		if (isPrime(test_number) == 0) //if number is not prime increase test number
		{
			test_number++;
		}
		if (isPrime(test_number) == 1) //if number is prime we add to the counter till we reach 10001st prime 
		{
			counter++;
			if (counter == 10001)
			{
				flag = false; //loop exit criteria
				cout << test_number << endl;
			}
			test_number++; //if loop exit has not been met increase test number and continue within the loop
		}

	}

	system("pause");
	return 0;
}