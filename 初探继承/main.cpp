#include<iostream>
#include<string>
using namespace std;
class Aiefei {
public:
	Aiefei() {
		name = "����";
	}
	Aiefei(string n) {
		this->name = n;
	}
	void Print() {
		cout << name + "���ҵİ�������ÿ�����϶��۰�����" << endl;
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
		name = "��ӱ";
	}
	void Print() {
		cout<<name+ "���ҵİ�������ÿ�����϶��۰�����" << endl;
	}
private:
	string name;
};
int main() {
	Son s;
	s.Print();
	Son d("��Ⱥ");
	d.Print();
	return 0;
}