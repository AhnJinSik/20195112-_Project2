#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> n;

	string* name = new string[n];

	for (int i = 0; i < n; i++) {
		cout << "�̸� �Է� #"<<i+1<<" ";
		cin >> name[i];
	}

	cout << "������ �̸� ����Դϴ�."<<endl;
	for (int i = 0; i < n; i++)
		cout << "�̸� �Է� #" << i + 1 <<" "<< name[i] << ", "<<endl;

}