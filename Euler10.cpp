//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 10                                    //
//August 2015                                   //
//**********************************************//


#include <iostream>
#include <cmath>

//*********************************************//
// not going to re-invent the wheel            //
// this is the prime function I used for       //
// problem #3 with a minor tweak to the inner  //
// loop for efficiency                         //
//*********************************************//
long long isPrime(long long x)
{
	if (x % 2 == 0)
	{
		return 0; //its even so not prime
	}
	for (long long i = 3; i <= (pow(x, 0.5)); i += 2) //this will only look at the odd numbers of our input.
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
	long long total = 2; //start with the first prime 2 for a total

	for (int i = 3; i < 2000000; i += 2) //main loop checking only odd numbers
	{
		if (isPrime(i)) //if the function returns a prime number its added to the total
		{
			total += i;
		}
	}
	
	std::cout << total << std::endl;
	system("pause");
	return 0;
}