// Calculator based on stack

#include "Stack.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Calculator {
private:
	stack<double> m_num; // ����ջ
	stack<string> m_opr; // �����ջ
	static vector<string> m_oprLib; // �������

	// ֪ʶ, �õ���������ȼ�
	int getPrecedence(const string &s, bool isCurrent) const;

	// ��ȡ�����
	string readOpr(string::const_iterator &it);

	// ��ȡ������
	double readNum(string::const_iterator &it);

	// ����, ʹ�������ջ�Ͳ�����ջ����Ԫ�ؽ��м��㲢�޸�����ջ
	void calculate();

	// ֪ʶ, �ж��ַ��Ƿ�Ϊ����
	// ��д, ���϶�'-'�Ǹ��Ż��Ǽ��Ž����жϵĹ���
	// ע���жϵ�����Խ��(unfinished)
	bool isNum(string::const_iterator &c) const
	{
		if (*c >= '0'&&*c <= '9' || *c == '.')
		{ 
			return true;
		}
		else
		{
			return false;
		}
	}

	// ���ַ������зָ���������������й���
	void process(const string &str);

public:
	// �޲ι��캯��
	Calculator();
	
	double doIt(const string &eqt);
};



