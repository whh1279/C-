#include<iostream>
int main(void) {
	int a = 0, b = 0;
	std::cout << "������һЩ��������ctrl+z��ʾ����" << std::endl;
	while (std::cin >> a) {
		b += a;
	}
	std::cout << "�������������֮��Ϊ" << b << std::endl;
}