#include <iostream>
#include <string>
using namespace std;

int main() {
	
	//Simple while loop
	//int x = 5;
	//while (x) {
	//cout << x-- << endl;
	//}

	//Simple do while loop - it will always do it once, and then repeat if while condition is true
	//int x = 5;
	//do {
	//	cout << x-- << endl;
	//} while (x); //Avoid do while loops

	////Simple for loop
	//for (int i = 0; i < 10; i++)
	//	cout << i << endl;

	//int i = 0;
	//for (;;) {
	//	if (i == 5) {
	//		i++;
	//		continue;
	//	}
	//	cout << i++ << endl;
	//	if (i > 10)
	//		break;
	//}

	////Nested loop
	//for (int tens = 0; tens < 100; tens += 10) {
	//	cout << "TENS IS AT: " << tens << endl;
	//	for (int ones = 0; ones < 10; ones++) {
	//		cout << tens + ones << endl;
	//	}
	//}

	//Coding challenges
	//1 Create a for loop that prints out 0-10
	//for (int i = 0; i <= 10; i++)
	//	cout << i << endl;

	//2 Create a for loop that prints out 0-100 but only even numbers
	//for (int i = 0; i <= 100; i++)
	//	if ((i % 2) == 0)
	//		cout << i << endl;
	
	//3 Create a for loop that prints out 0-100 but only even numbers
	//for (int i = 0; i <= 100; i++)
	//	if ((i % 2) == 1)
	//		cout << i << endl;

	//4 Create a while loop that removes a letter from a string until there are no leters remaining
	string s = "harry potter";
	while (size(s) > 0){
		cout << s << endl;
		s.erase(0, 1);
	}
	cout << s << endl;
	
	



	string y;
	getline(cin, y);
	return 0;
}