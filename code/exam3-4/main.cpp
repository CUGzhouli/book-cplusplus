/*
*���ٷ��Ƶ�ѧ���ɼ�ת�����弶�ƣ�����ɼ���90�ֵ�100�ַ�Χ�ڣ�����90�ֺ�100�֣���
*��ת����A��80�ֵ�90�ַ�Χ��Ϊ B������80�ֲ�����90�֣����������ƣ�60������ΪF
*/
#include<iostream>
using namespace std;

int main() {
	int score;
	cout << "������һ������:";
	cin >> score;

	switch (score/10){
	case 9:case 10:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}	
	return 0;
}