
//**********************************************//
//Richard Keener                                //
//Project Euler   (projecteuler.net)            //
//Problem 8                                     //
//June 2015                                     //
//**********************************************//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	string digits = "73167176531330624919225119674426574742355349194934";  //inserting this insanely long number as a string
	digits += "96983520312774506326239578318016984801869478851843";
	digits += "85861560789112949495459501737958331952853208805511";
	digits += "12540698747158523863050715693290963295227443043557";
	digits += "66896648950445244523161731856403098711121722383113";
	digits += "62229893423380308135336276614282806444486645238749";
	digits += "30358907296290491560440772390713810515859307960866";
	digits += "70172427121883998797908792274921901699720888093776";
	digits += "65727333001053367881220235421809751254540594752243";
	digits += "52584907711670556013604839586446706324415722155397";
	digits += "53697817977846174064955149290862569321978468622482";
	digits += "83972241375657056057490261407972968652414535100474";
	digits += "82166370484403199890008895243450658541227588666881";
	digits += "16427171479924442928230863465674813919123162824586";
	digits += "17866458359124566529476545682848912883142607690042";
	digits += "24219022671055626321111109370544217506941658960408";
	digits += "07198403850962455444362981230987879927244284909188";
	digits += "84580156166097919133875499200524063689912560717606";
	digits += "05886116467109405077541002256983155200055935729725";
	digits += "71636269561882670428252483600823257530420752963450";

	long long product = 1; //using long long here to hold the size of this again rediculusly large number
	long long temp = 1;

	for (int i = 12; i < digits.length(); i++) //outer loop to check 13 digits at a time
	{ 

		for (int j = 0; j<13; j++) //inner loop to check each digit within the set
		{

			temp = temp*atoi(digits.substr(i - j, 1).c_str()); //checks the digits against each other, and the converts to an integer 
		}

		if (temp > product) //compares temp with product to determine which is larger
		{
			product = temp;
			cout << product << endl;
		}

		temp = 1; //reset temp
	}

	system("pause");
	return 0;
}