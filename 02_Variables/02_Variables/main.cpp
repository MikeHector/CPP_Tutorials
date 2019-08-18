//This program will explore variables in c++
#include <iostream>
using namespace std;

int main() {

	/*
	int x = 0; //x is an integer with value 0
	int y(0); //y is an integer with value 0
	
	int cars = 14;
	int debt = -1000;
	float cash = 2.32; //cash is a float
	double credit = 32.32;
	char a = 'a';
	const char* sandwich = "turkey";
	bool am_i_awake = true;
	auto do_i_have_pants_on = true;
	auto blank_check = 200.00;
	int over_9000 = INT_MAX; //max value of an integer

	cout << over_9000 << endl; //let's see the value of max int 
	int _ = 5;
	cout << _ << endl; //display my terribly named variable
	*/

	/*
	//Let's look at sizes of different variable types
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;

	//Let's look at different sizes of ints
	cout << ' ' << endl;
	cout << sizeof(short int) << endl;
	cout << sizeof(long int) << endl;
	cout << sizeof(long long int) << endl;
	*/

	/*
	unsigned int x = -1; //shifts range of ints from +/-32767 to 0 -> 65535
	// x= -1 starts counting backward from maximum value
	cout << x << endl;
	*/

	/*
	cout << INT_MIN << endl;
	cout << INT_MAX<< endl;
	cout << LONG_MIN << endl;
	cout << SHRT_MIN << endl;
	cout << SHRT_MAX << endl;
	*/

	//Lil coding challenge
	
	//Create 3 char bool int float and double variables with different values
	//chars
	const char* char_one= "normal char string";
	const char char_two = 'a';
	const char* char_three = "2020";

	cout << char_one << endl;
	cout << char_two << endl;
	cout << char_three << endl;

	//bools
	bool bool_one = 0;
	bool bool_two = 1;
	bool bool_three = 5; //Resolves to 1 (true bool)

	cout << bool_one << endl;
	cout << bool_two << endl;
	cout << bool_three << endl;

	//ints
	int int_one = 2929;
	int int_two = -23;
	int int_three = 2.9; //Resolves to 2

	cout << int_one << endl;
	cout << int_two << endl;
	cout << int_three << endl;

	//floats
	float float_one = 2.5;
	float float_two = 44;
	float float_three = -2.3333334;

	cout << float_one << endl;
	cout << float_two << endl;
	cout << float_three << endl;

	//doubles
	double double_one = 2.34343424;
	double double_two = 999;

	cout << double_one << endl;
	cout << double_two << endl;

	//2
	unsigned short int b = -1; //resolves to one less than 2*shrtint max
	//int b_guess = SHRT_MAX * 2;

	cout << b << endl;
	//cout << b_guess << endl;
	//cout << '' << endl;

	 
	unsigned long long int d = -1; //resolves to 1 less than a gigantic number
	cout << d << endl;

	unsigned long double e= -1;
	cout << e << endl;

	return 0;
}