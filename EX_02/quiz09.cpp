#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand((unsigned int)time(NULL));

	int dice1,dice2;
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	int x = dice1 + dice2;
	if ((x == 7) || (x == 11))
		cout << "����ڰ� �̰���ϴ�" << endl;
	else if ((x == 2) || (x == 3) || (x == 12))
		cout << "����ڰ� �����ϴ�" << endl;
	else
		cout << "���º�" << endl;
}