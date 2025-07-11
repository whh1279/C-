#include<iostream>
#include<string>
using namespace std;
class Father {
	friend void test();
public:
	Father() {
		wife = "ÕÂÑô";
	}
	void func() {
		cout << "ÕÂÑô°®´©°×É«³ÄÉÀ£¬Å£×Ð¶Ì¿ãÅäÈâÉ«Á¬¿ãÍà" << endl;
	}
private:
	string wife;
};
class Son:public Father {
	friend void test();
public:
	Son() {
		wife = "ÕÔÈº";
	}
	void func() {
		cout << "ÕÔÈº°®´©°×É«¶ÌÁ¬ÒÂÈ¹ÅäÈâ·ÛÉ«Á¬¿ãÍà" << endl;
	}
private:
	string wife;
};
void test() {
	Son s;
	cout << "ÎÒµÄÀÏÆÅÊÇ"<<s.wife << endl;
	cout << "ÎÒµÄÀÏÆÅÊÇ"<<s.Father::wife << endl;
	s.func();
	s.Father::func();
}
int main(void) {
	test();
	return 0;
}