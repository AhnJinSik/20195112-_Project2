#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int money = 50, goal = 250, bets = 0, win = 0;

	cout << "초기 금액 " << money << "$" << endl;
	cout << "목표 금액 " << goal << "$" << endl;

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
	cout << "1000 중의 " << win << "번 승리" << endl;
	cout << "이긴 확률=" << double(win) / 1000 * 100<< endl;
	

}