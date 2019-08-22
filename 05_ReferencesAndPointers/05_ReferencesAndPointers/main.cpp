//Pointers and References
#include <iostream>
#include <string>
using namespace std;

int main() {
	//Reference is where the data lives in memory (hoop), can have multiper pointers, can't be switched
	////references
	//int a = 5;
	//int& my_ref = a;
	//cout << a << endl;
	//cout << my_ref << endl;
	//cout << &a << endl;
	//cout << &my_ref << endl;



	//Pointers are the data type that stores references (hook), can be null, can be switched
	//pointers
	//int a = 5;
	//cout << *&a << endl; // same as value of a

	//int a = 5;
	//int* p1; //initialize pointer p1
	//p1 = &a; //set the pointer p1 to the address of a
	//int* p2 = &a; //same as p1

	//cout << &a << endl; //address of a
	//cout << p1 << endl; // pointer 1 which should be the address of a
	//cout << *&a << endl; // the data at address a
	//cout << *p1 << endl; // value at that address



	//int a[]{ 1,2,3 };
	//int* p1 = &a[0]; //make a pointer to reference the first element of a
	//cout << *p1 << endl; //The value of that element is 1
	//cout << p1[0] << endl; //However, we've actually created an array of pointers
	//cout << p1[1] << endl; //See?
	//cout << p1[2] << endl;
	//cout << ' ' << endl;

	//cout << a << endl; //looking at a just lists the address where it's first element lives lives
	//cout << p1 << endl; //same address
	//cout << p1 + 1 << endl; //this takes a look at the next address in the array of pointers
	//cout << &p1[1] << endl; //See?
	//cout << *&p1[1] << endl; //See?

	//int b = 444;
	//int* p2 = &b; //set to reference
	//cout << p2[0] << endl; //The first element of pointer takes you to the data
	//cout << &p2[0] << endl;



	//Array of pointers
	//int a1 = 5,
	//	a2 = 6,
	//	a3 = 7; //Make some data
	//int* p1 = &a1,
	//	*p2 = &a2,
	//	*p3 = &a3; //Make some pointers
	//int* pa[]{ p1,p2,p3 }; //Smash the pointers together

	//cout << pa << endl; //The array is a pointer
	//cout << *pa << endl; //That pointer looks here
	//cout << **pa << endl; //The address of that pointer has the original data
	//cout << pa[0] << endl; //Sim for square brackets - this gives the pointer of the first element
	//cout << *pa[0] << endl; //Follow that pointer to the data
	//cout << pa[0][0] << endl; //Or just do this

	//cout << ' ' << endl;

	//cout << pa << endl; //Original array's pointer
	//cout << &pa[1] << endl; //Grab the address of the first item
	//cout << pa + 1 << endl; //Grab the address of the item after the 0th
	//cout << &pa[2] << endl;
	//cout << pa + 2 << endl;

	//Coding challenges
	//1 Create 5 different variables of different data types Output each values and addresses
	int one_int = 3;
	cout << one_int << endl;
	cout << &one_int << endl;
	double one_double = 3.333;
	cout << one_double << endl;
	cout << &one_double << endl;
	bool one_bool = 1;
	cout << one_bool << endl;
	cout << &one_bool << endl;
	float one_float = 3.14159999;
	cout << one_float << endl;
	cout << &one_float << endl;
	string one_string = "wuzup";
	cout << one_string << endl;
	cout << &one_string << endl;

	cout << ' ' << endl;

	//3 Create 3 different variables of same data type; create reference variables and store in array;
	//output values in array
	int two_1 = 1,
		two_2 = 2,
		two_3 = 3;
	int* p1 = &two_1,
		*p2 = &two_2,
		*p3 = &two_3;
	int* pa[] = { p1,p2,p3 };
	cout << pa[0] << endl;
	cout << pa[1] << endl;
	cout << pa[2] << endl;
	cout << *pa[0] << endl; //check
	cout << *pa[1] << endl;
	cout << *pa[2] << endl;







	string y;
	getline(cin, y);
	return 0;
}
