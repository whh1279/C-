#include<iostream>
#include<string>
using namespace std;
class Biaobai {
public:
	Biaobai(string n) {
		this->name = n;
	}
public:
	string name;
};
Biaobai operator+(Biaobai &b1,Biaobai &b2) {
	Biaobai temp(b1.name+b2.name);
	return temp;
}
int main() {
	Biaobai b("������ë��ٻ��");
	Biaobai c(",�Ұ��㣡");
	Biaobai d = b + c;
	cout << d.name << endl;
	return 0;
}