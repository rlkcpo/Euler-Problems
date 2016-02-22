
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
	int total;
	int sum_of_squares = 0;
	int square_of_sum = 0;

	for (int i = 1; i <= 100; i++) //determinie the sum of the squares from 1-100
	{
		sum_of_squares += i*i;
	}
	for (int j = 1; j <= 100; j++) //determine the sum of all numbers from 1-100
	{
		square_of_sum += j;
		
	}
	square_of_sum = square_of_sum * square_of_sum; //square the sum from j loop
	total = square_of_sum - sum_of_squares; //determine difference between the two
	cout << total << endl;
	system("pause");
	return 0;
}