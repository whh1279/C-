#include<iostream>
#include<string>
using namespace std;
template<class T>
void Plus(T a, T b) {
	cout << a << "和" << b << "都是我的老婆" << endl;
}

template<class Name>
class Swap {
public:
	Swap(Name a) {
		this->a = a;
	}
	void Print() {
		cout << a << "是我的小妾" << endl;
	}
public:
	Name a;
};
void test1() {
	string a = "张颖";
	string b = "陈宇阳";
	Plus(a, b);
	Swap<string> m("毛婉倩");
	m.Print();
}
int main(void) {
	test1();
	return 0;
}