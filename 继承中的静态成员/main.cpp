#include<iostream>
#include<string>
using namespace std;
class Father {
	friend void test(void);
private:
	static string wife;
};
string Father::wife = "������";
class Son:public Father {
	friend void test(void);
private:
	static string xiaosan;
};
string Son::xiaosan = "ë��ٻ";
void test(void) {
	Son s;
	cout << "�ҵ�������" << s.wife << endl;
	cout << "�ҵ�С����" << s.xiaosan << endl;
}
int main(void) {
	test();
	return 0;
}