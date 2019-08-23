#include <iostream>
#include <string>
using namespace std;

void print_Ham() {
	cout << "ham\n";
}

void print_Words(string a) {
	cout << a << endl;
} // a is a copy

void add_One(int* i) {
	(*i)++; //increment value at *i
	// *i++ // next location in memory BAD!
}

void add_Two(int& j) {
	j += 2;
}

void increment_Array(double* arr, int size = 5) {
	for (int i = 0; i < size; i++)
		arr[i]++;
}

//outputs
int return_one() {	return 1; }

int* AVOID_THIS() {
	int a = 2; //make a garbage variable
	return &a; //it only exists in this namespace, so it gets popped out of memory 
		//DONNT DO THIS
}

int* AVOID_THIS_TOO() {
	int* b = new int[5]; //This creates a variable that will exist outside of this function
	return b; // BAD! Because it uses memory and can create a memory leak
}

int& AVOID_THIS_THREE() {
	int c = 4;
	return c; //c will also be destroyed
}

int times_Ten(int x) {
	return 10 * x;
}

void mult_Array(double* arr, int size, float multiplier) {
	for (int i = 0; i < size; i++)
		cout << arr[i] * multiplier << endl;;
}

int main() {
	//print_Ham();
	
	// int x = 5;
	//add_One(&x);
	//cout << x << endl;

	//add_Two(x);
	//cout << x << endl;

	//double super_array[] = { 1,2,3,4,12 };
	//increment_Array(super_array, 3);
	//for (int i = 0; i < 5; i++)
	//	cout << super_array[i] << endl;

	//int* x, *y, u;
	//x = AVOID_THIS();
	//cout << *x << endl;

	//y = AVOID_THIS_TOO();
	//cout << *y << endl;

	//u = AVOID_THIS_THREE();
	//cout << u << endl;
	//cout << endl;

	//1 Create a function called 'times_Ten that takes an int as a parameter, then returns the product of it ties ten
	//No references or pointers
	int x = 5, y;
	y = times_Ten(x);
	cout << y << endl;

	//2 Create a 'print' function that takes a string with default value of "ham" and simply print out the value of the string
	string s = "ham";
	print_Words(s);

	//3 Create a 'mult_Array function that takes in a pointer to an array, the size of the array, and a double called multiplier.
	// Create a loop within the function that multiplies every value in the array by the multiplier
	double super_array[] = { 1,2,3,4,12 };
	mult_Array(super_array, 5, 2);
	//for (int i = 0; i < 5; i++)
	//	cout << super_array[i] << endl;


	string z;
	getline(cin, z);
	return 0;
}