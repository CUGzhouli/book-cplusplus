/*
*��������Ϸ
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(time(0)); // use current time as seed for random generator
	int target = rand() % 100;
	int guess;
	cout << "���0-100֮�ڵ���" << endl;
	do {
		cin >> guess;
		if (guess < target) {
			cout << "��С��" << endl;
		}
		else if(guess > target) {
			cout << "�´���" << endl;
		}
		else {
			cout << "��ϲ�� �¶��ˣ�" << endl;
		}
	} while (guess != target);
	return 0;
}