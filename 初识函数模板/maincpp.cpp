#include<iostream>
#include<string>
using namespace std;
template<class T>
void Plus(T a, T b) {
	cout << a << "��" << b << "�����ҵ�����" << endl;
}

template<class Name>
class Swap {
public:
	Swap(Name a) {
		this->a = a;
	}
	void Print() {
		cout << a << "���ҵ�С�" << endl;
	}
public:
	Name a;
};
void test1() {
	string a = "��ӱ";
	string b = "������";
	Plus(a, b);
	Swap<string> m("ë��ٻ");
	m.Print();
}
int main(void) {
	test1();
	return 0;
}