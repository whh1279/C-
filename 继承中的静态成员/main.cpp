#include<iostream>
#include<string>
using namespace std;
class Father {
	friend void test(void);
private:
	static string wife;
};
string Father::wife = "王子怡";
class Son:public Father {
	friend void test(void);
private:
	static string xiaosan;
};
string Son::xiaosan = "毛婉倩";
void test(void) {
	Son s;
	cout << "我的老婆是" << s.wife << endl;
	cout << "我的小三是" << s.xiaosan << endl;
}
int main(void) {
	test();
	return 0;
}