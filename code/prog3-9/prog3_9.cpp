/*
*����sin(x)��[0:2pi]�ڵ�����
*/
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main() {
	double step = 0.2;//x���ӵĲ���
	double x = 0;
	ofstream out("sinx.txt");
	while (x < 6.28) {//��һ�����ڵ�����
		int val = 30*(sin(x)+1);
		cout << "  ";
		for (int i = 0; i < val; ++i) {
			cout << " ";
			out << "~";
		}
		cout << "*" << endl;
		out << "*\\\\" << endl;
		x += step;
	}
	out.close();
	return 0;
}