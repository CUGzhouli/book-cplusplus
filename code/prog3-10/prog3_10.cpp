/*
*ʯͷ��������Ϸ
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int computer,you;
	while (1) {
		do {
			cout << "��ã� ʯͷ=0, ����=1, ��=2";
			computer = rand() % 3;
			cout << "����֣�";
			cin >> you;
			switch (you - computer) {
			case 0:
				cout << "ƽ��!" << endl;
				break;
			case 1: case -2:
				cout << "������!" << endl;				
				break;
			case -1: case 2:
				cout << "��Ӯ��!" << endl;
				break;
			}
		} while (computer==you);
		cout << "��Ҫ����Y/N:";
		char play;
		cin >> play;
		if (play == 'N' || play == 'n') break;
	}
	return 0;
}