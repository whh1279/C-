#include<iostream>
#include<string>
using namespace std;
//初识多态
class Wangrong {
public:
	virtual void Yuepao() {
		cout << "和王荣开房做爱" << endl;
	}
};
class Zhangyang :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "和章阳开房做爱" << endl;
	}
};
class Zhaoqun :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "和赵群开房做爱" << endl;
	}
};
class Chenyuyang :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "和陈宇阳开房做爱" << endl;
	}
};
void Doai(Wangrong * w) {
	w->Yuepao();
}
void test() {
	Wangrong * piao = NULL;
	piao = new Zhangyang;
	Doai(piao);
	delete piao;
	piao = new Zhaoqun;
	Doai(piao);
	delete piao;
	piao = new Chenyuyang;
	Doai(piao);
	delete piao;
}
int main(void) {
	test();
	return 0;
}