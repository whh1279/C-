#include<iostream>
int main(void) {
	int a, b;
	std::cout << "请输入两个数" << std::endl;
	std::cin >> a >> b;
	std::cout << a << "和" << b << "的乘积为" << a * b << std::endl;
	return 0;
}