#include<iostream>
#include<string>
// std::  length_error ������ �ذ��� �����ϱ�
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
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;

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
		cout << "���ʽ�: " << bonus << endl;
		cout << "��ü �޿�: " << bonus + salary << endl;
	}

};

int main() {
	Manager m("��ö��", 200, 100);
	m.computerSalary();

}