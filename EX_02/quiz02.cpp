#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double r) {
	return (4.0 / 3.0 * 3.14 * pow(r, 3));
}

int main() {
	double r;
	cout << "�������� �Է��ϼ���:";
	cin >> r;
	cout << "���� ���Ǵ� " << calc_volume(r) << endl;
}