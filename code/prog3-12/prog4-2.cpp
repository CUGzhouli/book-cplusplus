/*
*�˻ʺ�����
*/
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void findall() {
	constexpr int sz = 8;
	int que[sz] = { 0 };
	int i = 0, cnt = 0;
	sqrt(1.2);
	while (i >= 0) {
		int k = 0;
		while (k<i) {
			if (que[k] != que[i] && (abs(que[i] - que[k]) != abs(i - k))) {
				++k;
			}
			else {
				break;
			}
		}

		if (k < i || que[i] == 8) {//�г�ͻ����������һ������ʱ���һ�г���

			++que[i];//�ƶ�����һ��

			while (que[i] >= 8) {//��ǰ�����г��Զ�ʧ�ܣ���Ҫ����
				que[i] = 0; //���õ�ǰ�лʺ�λ��
				--i;//���ݵ���һ��
				if (i < 0) {//������ݵ���0��֮ǰ����������
					break;
				}
				++que[i];//ǰһ�лʺ����һ��				
			}

			continue; //���¼���Ƿ���ǰ�����лʺ��ͻ

		}
		else { //�޳�ͻ��������һ�Żʺ�
			++i;
			if (i < sz) continue; 	//�����ҵ�һ�����������

			cout << "����" << ++cnt << ": ";
			for (k = 0; k<sz; ++k) {
				cout << que[k];
			}
			cout << endl;

			i = sz - 1; //
			++que[i];
		}
	}

}

void onesolution() {
	constexpr int sz = 8;
	int que[sz] = { 0 };
	int i = 0;
	while (i >= 0) {
		int k = 0;
		while (k<i) {
			if (que[k] != que[i] && (abs(que[i] - que[k]) != abs(i - k))) {
				++k;
			}
			else {
				break;
			}
		}
		if (k < i) {//�г�ͻ
			++que[i];//�ƶ�����һ��
			while (que[i] == 8) {//��ǰ�����г��Զ�ʧ�ܣ���Ҫ����
				que[i] = 0; //���õ�ǰ�лʺ�λ��
				--i;//���ݵ���һ��
				if (i < 0) {//������ݵ���0��֮ǰ����������
					break;
				}
				++que[i];//ǰһ�лʺ����һ��				
			}
			continue; //���¼���Ƿ���ǰ�����лʺ��ͻ
		}
		else { //�޳�ͻ��������һ�Żʺ�
			++i;
			if (i < sz) continue; 	//�����ҵ�һ�����������		
			cout << "�ҵ�һ��������";
			for (k = 0; k<sz; ++k) {
				cout << que[k];
			}
			cout << endl;
			break;
		}
	}
}

int main() {

	onesolution();

	return 0;
}