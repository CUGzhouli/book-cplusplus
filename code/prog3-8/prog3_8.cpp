/*
*��������Ϸ, break, switch, do while
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0)); 
	int target = rand() % 100;
	int guess;
	cout << "���0-100֮�ڵ���" << endl;
	while(1) {
		cin >> guess;
		int val = (guess > target)- (guess < target);
		switch (val){
		case -1:
			cout << "��С��" << endl;
			break;	//����switch
		case 1:
			cout << "�´���" << endl;
			break;  //����switch
		case 0:
			cout << "��ϲ�� �¶��ˣ�" << endl;
			break;  //����switch
		}
		if (val == 0) {
			break; //����while
		}
	}
	return 0;




}