#include<iostream>
#include<string>
// std::  length_error 떴었음 해결방법 문의하기
using namespace std;


class Empolyee {
protected:
	string name;
	int salary;

public:
	Empolyee(string n, int s) :name{ n }, salary{ s } {
		this->name = n;
		this->salary = s;
	}
	void computerSalary() {
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;

	}

};

class Manager :public Empolyee {
	int bonus;
public:
	Manager(string name, int salary, int bonus) :Empolyee(name, salary) {
		this->bonus = bonus;
	}
	void computerSalary() {
		Empolyee::computerSalary();
		cout << "보너스: " << bonus << endl;
		cout << "전체 급여: " << bonus + salary << endl;
	}

};

int main() {
	Manager m("김철수", 200, 100);
	m.computerSalary();

}