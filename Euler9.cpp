
//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 3                                     //
//June 2015                                     //
//**********************************************//

#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int max = 1000;

	for (a = 1; a < max / 3; a++) //to determine a
		{
			for (b = a; b < max / 2; b++) //to determine b
			{
				c = max - a - b; //determine c

				if (a * a + b * b == c * c) //check if pythagorean
				{
					if (a + b + c == 1000) //check if it meets the problem criteria
					{
						cout << a * b * c << endl;
					}
				}
			}
		}
	system("pause");
	return 0;
}