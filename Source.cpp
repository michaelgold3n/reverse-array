/*HW Assignment_B.Green.cpp
Bryce Green
3/14/2021
Version 1.2
The program takes values that have been defined in an array and reverses them and outputs them to the user.*/

#include <iostream>
using namespace std;

/* Function named reverse containing a for loop that defines a variable i that is assigned the value 5 that decreases by 1 each time it runs the loop.
The function takes the array from the first fucntion and adds it as an argument and also copies the values from the array.*/
void reverse(int radarray[])
{
	for (int i = 5; i >= 0; i--)
	{
		cout << radarray[i] << endl;
	}
}


//The function defines an array with 6 values and assigns each part of the array with a value. The function calls upon the reverse function to copy the coolarray from this function.
int main()
{
	int coolarray[6] = { 65, 23, 92, 75, 4, 59 };
	reverse(coolarray);
}
