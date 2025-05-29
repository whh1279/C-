#include<iostream>
int main(void) {
	int a, b;
	int c;
	std::cout << "请输入两个整数" << std::endl;
	std::cin >> a >> b;
	if (a > b) {
		while (a >= b) {
			std::cout << a << " ";
			a--;
		}
	}
	else
		while (a <= b) {
			std::cout << b << " ";
			b--;
		}
	std::cout << std::endl;
}