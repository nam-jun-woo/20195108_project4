#include<iostream>
using namespace std;

template<typename T1>
class Circle {
private:
	T1 a;
	T1 b;
	T1 c;
public:
	Circle(T1 aa, T1 bb, T1 cc) : a{ aa }, b{ bb }, c{ cc } {}
	T1 area() {
		return (c - a) * (c - b) * 3.14;
	}

};
int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}