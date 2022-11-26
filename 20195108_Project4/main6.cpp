#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;

class Weapon {

public:
	virtual void load() = 0;


};

class Bomb : public Weapon {

public:
	void load() {
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
	}
};

class Gun : public Weapon {
public:
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
	}

};

int main() {

	Weapon* w = new Bomb();
	Weapon* e = new Gun();

	e->load();
	delete e;
	w->load();
	delete w;
}