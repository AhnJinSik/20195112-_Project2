#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int money = 50, goal = 250, bets = 0, win = 0;

	cout << "�ʱ� �ݾ� " << money << "$" << endl;
	cout << "��ǥ �ݾ� " << goal << "$" << endl;

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 1000; i++) {
			if ((double)rand() / RAND_MAX < 0.5) {
				money++;
				win++;
			}
			else 
				money--;
			if (money <= 0)
				break;
			if (money >= goal)
				break;		
	
	}
	cout << "1000 ���� " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ��=" << double(win) / 1000 * 100<< endl;
	

}