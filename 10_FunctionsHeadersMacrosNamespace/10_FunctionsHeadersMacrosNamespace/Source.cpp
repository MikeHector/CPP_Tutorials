#include <iostream>
#include <string>
using namespace std;
#include "print_Ham.h"
#include "add_Two.h"



int add_One(int x);

void add_one_arr(int arr[], int size) {
	for (int i = 0; i < size; i++)
		arr[i]++;
}



int main() {
	namespace food = ham::sandwich;
	//food::print_Ham();

	
	//1. Create a function that takes an array as an argument using square brackets
	int my_array[] = { 1,2,3,4 };
	add_one_arr(my_array,4);
	//cout << my_array[3] << endl;

	//2. Create a function called add_One that is declared before the main function and defined afterward.
	// It takes an int value and returns an int value of one more than is copied in
	int s = 3;
	//cout << add_One(s) << endl;

	//3. Create a function called add_Two that is declared in a header file and defined in a seperate cpp file
	//from the main.cpp file. It has a REFERENCE int parameter that adds two to it Nothing is returned.
	add_Two(s);
	cout << s << endl;

	return 0;
}

int add_One(int x) {
	return x+1;

}