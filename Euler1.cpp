//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 1                                     //
//June 2015                                     //
//**********************************************//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 0; 
	int sum = 0; 
	for (i; i < 1000; i++) //loop through all numbers from 1- 1000
	{
		if (i % 3 == 0 || i % 5 == 0) //determine if each number is a multiple of 3 or 5
			sum += i; //add that number to the sum
	}
	cout << sum << "\n"; //print answer to screen
	system("pause");
	return 0;
}
