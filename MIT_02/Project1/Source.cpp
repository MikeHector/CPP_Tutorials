#include <cstdlib>
#include <iostream>
#include <ctime>
#include <array>
using namespace std;

int raiseToPower(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

void printOnNewLine(int x) {
	cout << x << endl;
}

void printOnNewLine(string x) {
	cout << x << endl;
}

void increment(int& a) {
	a = a + 1;
}

void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

int increment2(int& a, int& b) {
	a = a + 1;
	b = b + 1;
	return a / b;
}

void sqrByPtr(int* numPtr) {
	*numPtr = *numPtr * *numPtr;
}

int sum(const int a, const int b) {
	return a + b;
}

double sum(const double a, const double b) {
	return a + b;
}

int sum(const int a, const int b, const int c) {
	return a + b + c;
}

int sumD(const int a, const int b, const int c = 0, const int d = 0) {
	return a + b + c + d;
}

int sumArr(const int array[], const int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) { 
		sum += array[i];
	};
	return sum;
}

int sumR(const int array[], const int start, const int len) {
	if (start >= len) { return 0; }
	return array[start] + sumR(array, start + 1, len);

}

double estimatePi(int n) {
	//Dart PI
	srand(time(nullptr));
	int hit_count = 0;
	double R = (double)RAND_MAX;
	for (int i = 0; i < n; i++) {
		double x = rand() / R;
		double y = rand() / R;

		(x * x + y * y < 1) ? hit_count++ : 2;
		//std::cout << y << endl;
	}
	return 4.0 * (hit_count / (double)n);
}

void printArray(char array[], int length) {
	for (int i = 0; i < length - 1; i++) {
		cout << array[i] << ", ";
	}
	cout << array[length - 1] << endl;
}

void reverse(int array[], int length) {
	for (int i = 0; i < length / 2; i++) {
		int tmp = array[i];
		array[i] = array[length - i - 1];
		array[length - i - 1] = tmp;

		//cout << *r << endl;
		//&array[length - i - 1] = q;

		/*
		int* r = &array[length - 1 - i];
		cout << q << endl;*/



		//int a = array[i];
		//int b = array[length - 1 - i];
		//array[i] = b;
		//array[length - i] = a;
	}
}

int strLength(const char *array) {
	int len = 0;
	while (*(array + len) != '\0') {
		++len;
	}
	return len;
}

void swapP(int **x, int **y) {
	cout << **x << endl;
	int *tmp = *x;
	*x = *y;
	*y = tmp;
	
}

int main() {
	//cout << raiseToPower(3, 3) << "\n";
	//printOnNewLine(3);
	//printOnNewLine("sdf");

	//int q = 3;
	//increment(q);
	//cout << q << endl;

	//int q = 5;
	//int r = 3;
	//swap(q, r);
	//cout << q << endl;
	//cout << r << endl;
	//increment2(q, r);
	//cout << q << endl;
	//cout << r << endl;

	//int x = 4;
	//sqrByPtr(&x);
	//cout << x << endl;

	//int arr[10] = { 3, 2 };
	//int* xPtr = arr;
	//cout << xPtr << endl;

	//int x = 1;
	//int y = 4;
	//int z = 3;
	//int w = 2;
	//int arr[3] = { x, y, z };
	//cout << sumR(arr, 0, 3) << endl;

	//cout << estimatePi(5000000) << endl;

	//char arr[] = { 'a','b','c','d' };
	//int len = 4;
	//printArray(arr, len);

	//int arr2[] = { 1,2,3,4 };
	//reverse(arr2, len);
	//cout << arr2[1] << endl;

	//const char arr[] = { 'a','b','c','d', '\0' };
	//cout << strLength(arr) << endl;

	//int x = 5;
	//int y = 6;
	//int* ptr1 = &x, * ptr2 = &y;
	//swapP(&ptr1, &ptr2);
	//cout << *ptr1 << ' ' << *ptr2 << endl;
	//cout << x << ' ' << y << endl;

	const char* oddOrEven = "Never odd or even";

	//const char* tmp = oddOrEven;
	const char *nthCharPtr = &oddOrEven[5];
	nthCharPtr = nthCharPtr - 2;
	cout << *nthCharPtr << endl;
	const char** pointerPtr = &nthCharPtr;
	cout << pointerPtr << endl;
	cout << **pointerPtr << endl;
	nthCharPtr++;
	//cout << nthCharPtr << endl;
	cout << oddOrEven  - nthCharPtr << endl;




	return 0;
}