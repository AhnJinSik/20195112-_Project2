#include <iostream>
#include <string>

using namespace std;
int checkU(char pw[]) {
	for (int i = 0; i < 1000; i++) {
		if ((pw[i] >= 'a') && (pw[i] <= 'z')) {
			return 1;
			break;
		}
		else return 0;
	}
}
int checkL(char pw[]) {
	for (int i = 0; i < 1000; i++) {
		if ((pw[i] >= 'A') && (pw[i] <= 'Z')) {
			return 1;
			break;
		}
		else return 0;
	}
}
int checkN(char pw[]) {
	for (int i = 0; i < 1000; i++) {
		if ((pw[i] >= '0') && (pw[i] <= '9')) {
			return 1;
			break;
		}
		else return 0;
	}
}
int main()
{
	char pw[1000];

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> pw;

	if ((checkU(pw) == 1) && (checkL(pw) == 1) && (checkN(pw) == 1))
		cout << "�����մϴ�" << endl;
	else cout << "�������� �ʽ��ϴ�" << endl;
	
}