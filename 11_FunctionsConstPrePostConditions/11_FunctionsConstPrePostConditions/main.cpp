#include <iostream>
#include <string>
#include <boost/timer.hpp>
#include <gsl/gsl>
using namespace std;

////Overloading functions
//int add(int a, int b) {
//	return a + b;
//}
//
//int add(int a, int b, int c) {
//	a + b + c;
//}
////Set c to default to 0
//int add(int a, int b, int c = 0) {
//	return a + b + c;
//}


//Recursion
//long long int factorial(long long int i) {
//	Expects(i > 0);
//	if (i <= 1)
//		return 1;
//	return factorial(i - 1) * i;
//}


//Some functions to demonstrate pre/post conditions
//void square_Root(double x) {
//	Expects(x >= 0);
//}
//
//int area(int w, int h) {
//	int a = w * h;
//	Ensures(a >= 0);
//	return a;
//}
//
////Stuff about Inline
//inline string add_Ham_Inline(string s) {
//	return s + "Ham";
//}
//
//string add_Ham_Reg(string s) {
//	return s + "Ham";
//}

////Const var stuff in functions
//void add_Ham_Ref(std::string& s) {
//	s += " ham";
//	std::cout << s;
//}
//
//void add_Ham_Copy(const std::string s) {
//	s += " ham";
//	std::cout << s;
//}
//
//void add_Ham_Ptr(const std::string* s) {
//	*s += " ham";
//	std::cout << s;
//}
////C++ won't allow you to change a const variable, even when passed to a function as a ref, copy, or array
////So, if an argument in a function isn't changed by the function, and it's more complex than a str or int, pass it as a class




inline int foo(int x) {
	Expects(x > 0);
	return x + 5;
}


int main() {
	////Introduce some const properties
	//const int i = 5;
	//int j = 8;
	//i = 4; //Error can't change const
	//int arr1[i];
	//int arr2[j]; //Error: needs to be const
	//int* arr3 = new int[j]; //dynamic array
	//const int* a;
	//int const* b; //both the same
	//int* const c = new int(4); //points to an address that doesn't change
	//void my_Function() const; //class vars cannot be changed

	//std::string sandwich = "sandwich";
	//add_Ham_Ref(sandwich);	

	////Test inline vs regular
	//boost::timer t;
	//string a = "Testing ";
	//cout << t.elapsed() << endl;
	//for (int i = 0; i < 100000; i++)
	//	//add_Ham_Reg(a);
	//	add_Ham_Inline(a);
	//cout << t.elapsed() << endl;

	//for (int i = 0; i < 100000; i++)
	//	add_Ham_Reg(a);
	//	//add_Ham_Inline(a);
	//cout << t.elapsed() << endl;

	//square_Root(-5);
	//area(-1, 1);

	//cout << factorial(6) << endl;

	//Challenges
	//1 Create const variables for the following an int, char, string, double
	const int a11 = 4;
	const char a12 = 's';
	const string a13a = "wefwef";
	const double a14 = 32342;


	//2 Create const pointers for an int, char, double
	int b1a = 3;
	const int& b1 = b1a;
	char b2a = 'w';
	const int& b2 = b2a;
	double b3a = 3.33;
	const int& b3 = b3a;

	//3 Create an inline function that takes in a const int reference, has a precondition
	//of it being greater than 0 and returns 5 more than that value
	//cout << foo(-3) << endl;
	
	//4 Create a const int const point set to 5
	int c = 5;
	const int* const d = &c;
	

	return 0;
}