#include<iostream>
#include<string>
using namespace std;
template<class T>
void swap(T &a,T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
};
void test() {
	string a = "章阳";
	string b = "赵群";
	cout << "王欣原来的妻子是穿着肉粉色连裤袜的"<<b << endl;
	swap(a,b);
	cout << "换妻之后王欣的妻子是穿着肉灰色连裤袜的" << b << endl;
}
int main(void) {
	test();
	return 0;
}