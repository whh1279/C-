#include<iostream>
#include<string>
using namespace std;
class Father {
	friend void test();
public:
	Father() {
		wife = "����";
	}
	void func() {
		cout << "����������ɫ������ţ�ж̿�����ɫ������" << endl;
	}
private:
	string wife;
};
class Son:public Father {
	friend void test();
public:
	Son() {
		wife = "��Ⱥ";
	}
	void func() {
		cout << "��Ⱥ������ɫ������ȹ�����ɫ������" << endl;
	}
private:
	string wife;
};
void test() {
	Son s;
	cout << "�ҵ�������"<<s.wife << endl;
	cout << "�ҵ�������"<<s.Father::wife << endl;
	s.func();
	s.Father::func();
}
int main(void) {
	test();
	return 0;
}