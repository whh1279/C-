#include<iostream>
int main(void) {
	int a = 0, b = 0;
	std::cout << "请输入一些整数，按ctrl+z表示结束" << std::endl;
	while (std::cin >> a) {
		b += a;
	}
	std::cout << "输入的所有整数之和为" << b << std::endl;
}