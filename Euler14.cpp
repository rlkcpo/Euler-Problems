
//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 14                                    //
//February 2016                                 //
//**********************************************//

#include <iostream>



int main()
{
	long long test_number = 0; 
	long long largest_chain = 0; 
	long long chain = 1; 
	long long number = 0; 

	for (int i = 14; i<1000000; i++) //main loop providing numbers up to 1 million
	{
		number = i; 
		while (number > 1)  //conditional loop while current number is not 1
		{
			if (number % 2 == 0) //check if number is even and calculate
			{
				number = number / 2; 
				chain++; 
			}
			else //odd calculations
			{
				number = (3 * number) + 1; 
				chain++; 
			}
		}
		if (chain > largest_chain) //test for a greater chain length
		{
			largest_chain = chain; 
			test_number = i; 
		}

		chain = 1; 
	}

	std::cout << test_number << std::endl; 
	system("pause");
	return 0;
}