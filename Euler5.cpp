//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 5                                     //
//July 2015                                     //
//**********************************************//

#include <iostream>

using namespace std;



int main()
{
	bool flag = true; //loop condition
	int testNumber = 1;
	int result;

	while (flag)
	{
		for (int i = 1; i <= 20; i++) //inner loop to act as modulo
		{
			result = testNumber % i; //check if the result is evenly divisible by 1-20 
			if (result != 0) //a no result increases the test number and restarts the loop
			{
				testNumber++;
				break;
			}
			if (i == 20) //stop condition
			{
				flag = false;
			}
		}
		
	}
	cout << testNumber << endl;
	system("pause");
	return 0;
}