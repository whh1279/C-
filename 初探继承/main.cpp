#include<iostream>
#include<string>
using namespace std;
class Aiefei {
public:
	Aiefei() {
		name = "章阳";
	}
	Aiefei(string n) {
		this->name = n;
	}
	void Print() {
		cout << name + "是我的爱妃，我每天晚上都疼爱她。" << endl;
	}
private:
	string name;
};
class Son:public Aiefei {
public:
	Son(string n) {
		this->name = n;
	}
	Son() {
		name = "张颖";
	}
	void Print() {
		cout<<name+ "是我的爱妃，我每天晚上都疼爱她。" << endl;
	}
private:
	string name;
};
int main() {
	Son s;
	s.Print();
	Son d("赵群");
	d.Print();
	return 0;
}