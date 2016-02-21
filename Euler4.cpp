//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 4                                     //
//June 2015                                     //
//**********************************************//

#include <iostream>
#include <sstream>

using namespace std;

bool isPalindrome(string s)
{
	if (s.length() <= 1)   //if only 1 or less letters it is palindrome
		return true;

	char first = s[0];  //variable for first letter
	char last = s[s.length() - 1];  //variable to second letter
	if (first == last)
	{
		string shortened = s.substr(1, s.length() - 2);  //create a new string removing the first and last letters
		return isPalindrome(shortened); //recursivley call the function again
	}
	else
		return false;  //not palindrome
}


int main()
{
	int a;
	int b;
	int result;
	int temp;
	string test;
	int greatest = 0;

	for (a = 100; a <= 999; a++) //the outerloop will loop until 999 while the inner loop loops until it meets the outer
	{
		for (b = 999; b >= a; b--)
		{
			result = a * b; //get the multiple
			stringstream ss;
			ss << result; 
			test = ss.str(); //convert to string for use in the palindrome function
			if (isPalindrome(test) == true)
			{
				stringstream convert(test);
				convert >> temp; //convert string back to an integer
				if (temp > greatest) //test for the largest multiple
				{
					greatest = temp;
				}
			}
		}
	}
	cout << greatest << endl;
	system("pause");
	return 0;
}