/*
*�ж�һ�������Ƿ����0����3�ı���
*/
#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "����������n:";
	cin >> n;
	if (n > 0 && n % 3 == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}