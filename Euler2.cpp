//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 2                                     //
//June 2015                                     //
//**********************************************//

#include <iostream>
#include <queue>
#include <numeric>

using namespace std;



int main()
{
	int firstNumber = 1;
	int secondNumber = 1;
	int temp;
	int sum = 0;

	while (secondNumber <= 4000000) //loop while fib sequence is not above 4 million
	{
		if (secondNumber % 2 == 0) //add the even elements
		{
			sum += secondNumber;
		}

		temp = secondNumber; 
		secondNumber += firstNumber;
		firstNumber = temp;
	}
	cout << sum << "\n";
	system("pause");
	return 0;
}