// Hello world program
#include <iostream>

using namespace std;

#define PI 3.1415926535
#define NEWLINE '\n'



int declare() {
	double r = 5.0;
	double circle;

	circle = 2 * PI * r;
	cout << circle << NEWLINE;
	
	return 0;
}

int inc() {
	for (int x = 0; x < 10;)
	{
		cout << ++x << NEWLINE;
	};
	return 0;
}

int HW_1() {
	const char* s = "Hello World!";
	cout << s << NEWLINE;

	return 0;
}

int HW_2() {
	int n = 4;
	const char* s = "Hello World!";
	for (int i = 0; i < n; i++) {
		cout << s << NEWLINE;
	}
	
	cout << NEWLINE;
	
	int w = 0;
	while (w < n) {
		cout << s << NEWLINE;
		w++;
	};

	cout << NEWLINE;

	w = 0;
	do {
		cout << s << NEWLINE;
		w++;
	} while (w < n);

	return 0;
}

double mean() {
	cout << "How many numbers in your list?" << NEWLINE;
	double N;
	cin >> N;

	double sum = 0;
	double max = -DBL_MAX;
	double min = DBL_MAX;
	for (int i = 0; i < N; i++) {
		double x;
		cout << "Please enter your values" << NEWLINE;
		cin >> x;
		sum += x;
		if (x > max) {
			max = x;
		}
		if (x < min) {
			min = x;
		}
	}
	
	double avg;
	avg = sum / N;
	double range;
	range = max - min;

	cout << "Mean: " << avg << NEWLINE;
	cout << "Max: " << max << NEWLINE;
	cout << "Min: " << min << NEWLINE;
	cout << "Range: " << range << NEWLINE;
	
	return 0;
}

int prime() {
	cout << "How many primes do you want?" << NEWLINE;
	int primes_desired;
	cin >> primes_desired;
	int primes_found = 0;
	int inc = 2;
	while (primes_found < primes_desired) {
		for (int i = 2; i <= inc; i++) {
			if (inc % i == 0) {
				if (i == inc) {
					primes_found++;
					cout << inc << NEWLINE;
				}
				break;
			}
		}
		inc++;
	}
	return 0;

}

int ternary() {
	while (true) {
		int N;
		cout << "Please input an integer" << NEWLINE;
		cin >> N;
		double output;
		//output = ((N >= 0) && (N % 5 == 0)) ? N / 5 : -1;
		if ((N >= 0) && (N % 5 == 0)) {
			output = N / 5;
		}
		else if (N < 0){
			cout << "Goodbye!" << NEWLINE;
			break;
		}
		else {
			continue;
		}

		cout << output << NEWLINE;
	}
	return 0;
}

int main() {
	//declare();
	//inc();
	//HW_2();
	//mean();
	//prime();
	ternary();
	

	return 0;
}