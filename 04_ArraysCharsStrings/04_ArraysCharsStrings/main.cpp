//Arrays
//Declare length and tyope
#include <iostream>
#include <string>
using namespace std;

int main() {
	//int my_array[2]; //create an array of ints, 2 long 
	//my_array[0] = 0; //put things in the array
	//my_array[1] = 1;

	//int my_array2[3] = { 0,1,2 }; //Or make it all at once
	//int my_array3[3]  { 4 }; //Creates an array of 0's while putting 4 in the first entry
	//int my_array4[]{ 7,7,7 }; //shoves {7,7,7} in the array
	//int my_array5[4]{}; //creates an array of 0's 4 long
	////int my_array4[] = { 7,7,2 }; //arrays can only be modified one element at a time


	//cout << my_array3[2] << endl;

	//2d arrays
	//int array_2d[2][3];
	//array_2d[0][0] = 1;
	//array_2d[1][2] = 1;

	//Character arrays
	//char a[] = "asdf";
	//char b[5] = "asdf"; //change 4 to 5 --at the end of every char array is another character /0
	//char c[]{ 'a','b', '\0' }; //add '\0' - otherwise we get a bunch of garbage from memory
	//char d[]{ 'a','b', '\0', 'c', '\0' }; //Outputs ab because it stops after it hits the first null character
	//
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;

	//Strings
	//cout << sizeof(string) << endl;
	//cout << sizeof(char) << endl;

	//string ham = "HAM";
	//string sandwich = "SANDWICH";

	//ham.swap(sandwich); //swaps one string for another
	//cout << ham << endl;
	//cout << sandwich << endl;
	//cout << ham.size() << endl;
	//cout << ham.find('q') << endl;
	//string x = ham + sandwich;
	//sandwich += ham;
	//cout << sandwich << endl;

	//Coding challenge
	//Create an int array with min/max int values
	int one[] = { INT_MIN,INT_MAX };
	cout << one[0] << endl;
	cout << one[1] << endl;

	//Create a double array with 5 double values
	double two[5] = { 2.4, 1.2, 3.4, .2, 4 };
	cout << size(two) << endl;

	//Create an array of size 1, then set its value
	int three[1] = { 2 };
	cout << three[0] << endl;

	//create a 2d array of characters, asigning them values 'a' through 'h'
	char four[2][4];
	four[0][0] = 'a';
	four[0][1] = 'b';
	four[0][2] = 'c';
	four[0][3]= 'd';
	four[1][0] = 'e';
	four[1][1] = 'f';
	four[1][2] = 'g';
	four[1][3] = 'h';
	
	cout << four[1][2] << endl;

	//create a int 3d array with assigned values of 1-8
	int five[2][2][2];
	five[0][0][0] = 1;
	five[0][0][1] = 2;
	five[0][1][0] = 3;
	five[0][1][1] = 4;
	five[1][0][0] = 5;
	five[1][0][1] = 6;
	five[1][1][0] = 7;
	five[1][1][1] = 8;

	cout << five[1][0][1] << endl;



	string y;
	getline(cin, y);
	return 0;

}
