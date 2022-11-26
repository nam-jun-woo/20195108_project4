#include<iostream>
using namespace std;


template<class T>
T getSamallest(T arr[], int n) {
	T min = 10;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}


int main() {

	double list[]{ 1.2,3.3, 9.0, 1.5, 8.7 };
	cout << getSamallest(list, 5);

}