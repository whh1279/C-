#include<iostream>
#include<string>
using namespace std;
//��ʶ��̬
class Wangrong {
public:
	virtual void Yuepao() {
		cout << "�����ٿ�������" << endl;
	}
};
class Zhangyang :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "��������������" << endl;
	}
};
class Zhaoqun :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "����Ⱥ��������" << endl;
	}
};
class Chenyuyang :public Wangrong {
public:
	virtual void Yuepao() {
		cout << "�ͳ�������������" << endl;
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