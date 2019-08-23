//This lesson focuses on additional libraries for C++
#include <iostream>
#include <gsl/gsl>
#include <boost/optional.hpp>
using namespace std;

int main() {
	int x = 5;
	gsl::owner<int*> p = &x; //If this is working, it'll compile
	boost::optional < string >; //If this is working, it'll compile


	return 0;
}