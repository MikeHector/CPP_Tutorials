#include <iostream>
using namespace std;

class Point {
public:
	double x, y;

	Point() {
		x = 0; y = 0; //Default constructor
	}

	Point(double nx, double ny) {
		x = nx; y = ny; //cout << "2-parameter constructor" << endl;
	}

	void offset(double offsetX, double offsetY) {
		x += offsetX;
		y += offsetY;
	}

	void print(){
		cout << "(" << x << "," << y << ")";
	}
};

class Vector {
public:
	Point start, end;

	void offset(double offsetX, double offsetY) {
		start.offset(offsetX, offsetY);
		end.offset(offsetX, offsetY);
	}

	void print() {
		//cout << "(" << start.x << "," << start.y << ") -> (" << end.x << "," << end.y << ")" << endl;
		start.print(); 
		cout << " -> "; 
		end.print();
		cout << endl;
	}
};

void printVector(Vector v) {
	cout << "(" << v.start.x << "," << v.start.y << ") -> (" << v.end.x << "," << v.end.y << ")" << endl;
}

void offsetVector(Vector &v, double offsetX, double offsetY) {
	v.start.x += offsetX;
	v.end.x += offsetX;
	v.start.y += offsetY;
	v.end.y += offsetY;
}

void offsetPoint(Point &p, double x, double y) {
	p.x += x;
	p.y += y;
}

int main() {

	Point p(2.0, 3.0);


	//Vector vec;
	//vec.start.x = 1.2;
	//vec.start.y = 0.4;
	//vec.end.x = 2.0;
	//vec.end.y = 1.6;

	//vec.offset(1, 1);
	//vec.print();
	//offsetVector(vec, 1, 1);
	//printVector(vec);

	//Point p;
	//p.x = 3.0;
	//p.y = 4.0;
	//offsetPoint(p, 1.0, 3.0);
	//cout << p.x << " " << p.y << endl;




	//Vector vec1;
	//vec1.start.x = 3.0;
	//vec1.start.y = 4.0;
	//vec1.end.x = 5.0;
	//vec1.end.y = 6.0;
	//Vector vec2;
	//vec2.start = vec1.start;
	//vec2.start.x = 7.0;



	//double xStart = 1.2;
	//double xEnd = 2.0;
	//double yStart = 0.4;
	//double yEnd = 1.6;

	//offsetVector(xStart, xEnd, yStart, yEnd, 1, 1.5);
	//printVector(xStart, xEnd, yStart, yEnd);

}