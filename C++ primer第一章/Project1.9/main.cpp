#include<iostream>
int main(void) {
	int a = 50, b = 0;
	while (a <= 100) {
		b += a;
		a++;
	}
	std::cout << "50到100之间的整数和位" << b << std::endl;
	return 0;
}