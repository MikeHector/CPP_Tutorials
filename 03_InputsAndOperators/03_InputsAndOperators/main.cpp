// TPayne's lesson 3
#include <iostream>;
#include <string>;
using namespace std;

int main() {
	/*
	string x;
	cout << "Please enter an Int: ";
	cin >> x;
	cout << "Thank you!" << endl;
	cin >> x;
	*/

	
	string y;
	cout << "Sandwich type: ";
	getline(cin, y);
	cout << "Creating " << y;
	cout << " Sandwich" << endl;
	cout << "Press enter to exit...";
	getline(cin, y);
	

	//char x[100];
	//cin >> x;
	//cin.getline(x, 100);
	//cin >> x;
	//cin >> x;
	//cin >> x;

	//Inputs
	/*
	//Set up inputs
	char x, y;
	int max_num_char = 100;
	char stop_at = ' ';

	x = cin.get(); //grab the first char of thefirst string
	cin.ignore(max_num_char, stop_at); //ignore stuff until the ' '
	y = cin.get(); //grab the first char of the next string
	cin.ignore(max_num_char, '\n'); //wait until the enter
	cout << x << y << endl; //output them

	string z;
	getline(cin, z);
	*/


	//Operators
	/*
	cout << 5 + 4 << endl;
	cout << 5 - 4 << endl;
	cout << 5 * 4 << endl;
	cout << 5 / 4.0 << endl; // 5 / 4 yields 1 cuz those are ints
	cout << 5 % 4 << endl;

	int x = 5;
	x += 8;
	cout << x << endl;
	*/

	/*
	int wounds = 5;

	wounds--;
	++wounds;
	cout << wounds << endl;
	*/

	//Logical operators
	/*
	cout << !true << endl;
	cout << !(5==4) << endl;
	cout << !(5 != 4) << endl;
	cout << !(5 < 4) << endl;
	cout << !(5 > 4) << endl;
	cout << (true && true) << endl;
	cout << (true || false) << endl;
	*/

	//string y;
	//getline(cin, y);

	return 0;
}