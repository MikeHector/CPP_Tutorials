#include <iostream>
#include <string>
using namespace std;

int main() {

	////If
	//if (1) cout << "ham"; //positives are true
	//if (-1) cout << " sandwich"; //negatives are true
	//if ('a') cout << " with";
	//if (5 > 3) {
	//	cout << " lettuce,";
	//	cout << " mustard,";
	//}
	//if (5 == 4) cout << " olives,";
	//if (5 > 2)
	//	;
	//if (2 > 3) cout << 'a';
	//else cout << " on wheat bread, ";

	//Conditional operator
	//5 > 4 ? cout << 'a' : cout << 'b';
	//(eval condition-bool) ? (do if true) : (do if false)
	//int x = 5 > 4 ? 1 : 2;
	//cout << x << endl;

	//Switches - can only check ints and bools
	//If condition is met, it will eval everything below it until it hits a break
	//switch (1) {
	//case 1: //is arg true?
	//	cout << "at 1" << endl;
	//	break;
	//case 2: //is arg equal to 1?
	//	cout << "at 2" << endl;
	//	break;
	//case 3: //is arg equal to 1?
	//	cout << "at 3" << endl;
	//	break;
	//}

	//Coding challenge
	//1: Create 3 if statements with '1', true and false as the arguments, but do nothing
	if (1);
	if (true);
	if (false);

	//2: Create 3 if else if statements taht check an int to see if it's >, == or <0
	int x = 0;
	if (x > 0) cout << x << " > 0" << endl;
	else if (x == 0) cout << x << " = 0" << endl;
	else if (x < 0) cout << x << " < 0" << endl;
	cout << " " << endl;
	//3: Create an if else statement that checks if a variable is odd/even,
	//and output just that along with lots of other random days of the week in a block of code using {}
	int var = 3;
	if ((var % 2) == 0) {
		cout << "even" << endl;
		cout << "TuesdayWednesdayThursday";
	}
	else if((var % 2) == 1) {
		cout << "odd" << endl;
		cout << "MondaySundayFundayTuesdayWednesdayThursday";
	}


	string z;
	getline(cin, z);
	return 0;
}