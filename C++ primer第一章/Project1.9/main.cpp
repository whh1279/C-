#include<iostream>
int main(void) {
	int a = 50, b = 0;
	while (a <= 100) {
		b += a;
		a++;
	}
	std::cout << "50��100֮���������λ" << b << std::endl;
	return 0;
}