/*
*���һԪ���η��̵ĸ�
*/
#include<iostream>
#include<cmath>  //������ƽ��������sqrt
using namespace std;

int main() {
	double a,b,c;
	cout << "������a(a!=0),b,c:";
	cin >> a >> b >> c;
	if (a != 0) { //����
		double delta = b*b - 4 * a*c;
		if (delta > 0) {
			double x1, x2;
			delta = sqrt(delta);
			x1 = (-b + delta) / (2 * a);
			x2 = (-b - delta) / (2 * a);
			cout << "����������ʵ��,�ֱ�Ϊ��" << x1 << ", " << x2 << endl;
		}
		else if (delta < 0) {
			cout << "������ʵ��" << endl;
		} 
		else {
			cout << "������������ͬ��ʵ����" << -b / (2 * a) << endl;
		}
	}
	else {
		cout << "a����Ϊ0" << endl;
	}

	return 0;
}