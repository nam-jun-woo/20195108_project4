#include<iostream>
using namespace std;

class Box {
private:
	int a;
	int b;
	int c;
public:

	Box(int a, int b, int c) : a{ a }, b{ b }, c{ c } {
		cout << "������ ����" << a << endl;
		cout << "������ �ʺ�" << b << endl;
		cout << "������ ����" << c << endl;
		cout << "������ ����" << a * b * c << endl;
		cout << endl;
	}
	int ss() {
		return a * b * c;

	}
	string operator<(Box& b) {

		if (ss() < b.ss())
			return "TRUE";
		else
			return "FALSE";
	}

};




int main() {

	Box a(10, 10, 10), b(20, 20, 20);

	cout << (a < b);

}