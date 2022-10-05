#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double r) {
	return (4.0 / 3.0 * 3.14 * pow(r, 3));
}

int main() {
	double r;
	cout << "반지름을 입력하세요:";
	cin >> r;
	cout << "구의 부피는 " << calc_volume(r) << endl;
}