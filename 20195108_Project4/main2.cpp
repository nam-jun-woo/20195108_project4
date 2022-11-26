#include<iostream>
using namespace std;

class Time {
private:
	int hours;
	int minute;
public:
	Time() :hours(0), minute(0) {}
	Time(int h, int m) :hours{ h }, minute{ m } {

	}

	void displayTime() {
		cout << hours << ": " << minute << endl;

	}


	Time& operator++() {
		if (minute == 59) {
			minute = 0;
			hours++;
		}
		else {
			minute++;
		}
		return *this;
	}



};
int main() {
	Time t(10, 59);
	t.displayTime();
	++t;
	t.displayTime();
	++t;
	t.displayTime();

}