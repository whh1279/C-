#include<iostream>
#include<string>
using namespace std;
class Biaobai {
public:
	Biaobai(){
		name = "ë��ٻ";
	}
	Biaobai(string n) {
		this->name = n;
	}
	void operator()();
	void Print() {
		cout << "�����ӷ�" << endl;
	}
private:
	string name;
};
void Biaobai::operator()() {
	cout << name + "����������" << endl;
}
int main(void) {
	Biaobai b;
	b.operator()();
	Biaobai c("����");
	c.operator()();
	c.Print();
	return 0;
}