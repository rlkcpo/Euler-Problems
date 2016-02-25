//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 12                                    //
//February 2016                                 //
//**********************************************//

#include <iostream>
#include <cmath>

int main()
{
	long long count = 0; 
	long long divisors = 0;
	long long x = 1;
	bool flag = true;

	while (flag)  //main loop
	{
		count += x; //adding factor to the count
		for (long long i = 2; i < sqrt(count); i++) //inner loop to test for factors
		{
			if (count % i == 0) //if factor found
			{
				divisors+=2;
			}
			if (divisors > 500)//exit criteria
			{
				flag = false;
			}

		}
		x++; 
		divisors = 0; //reset divisors on a loop exit
		
	}
	std::cout << count << std::endl;

	system("pause");
	return 0;
}