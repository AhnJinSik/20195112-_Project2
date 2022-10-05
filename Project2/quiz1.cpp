//p.115 1번 문제
#include <iostream>
using namespace std;

int main() {
	string ch1,ch2;
	
	cout << "첫 번째 문자열: ";
		cin >> ch1;
	cout << "두 번째 문자열: ";
		cin >> ch2;
	
	if (ch1 == ch2)
		cout << "두개의 문자열이 같습니다" << endl;
	else
		cout << "두개의 문자열이 다릅니다" << endl;
}