#include<iostream>
int main() {
	int sum = 10;
	{
		int sum = 0;
		std::cout << sum << std::endl;//���ʵڶ���sum�����0
	}
	std::cout << sum << std::endl;     // ���ʵ�һ��sum�����10	
	return 0;
}