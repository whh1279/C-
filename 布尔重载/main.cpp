#include<iostream>
#include<string>
using namespace std;
class Sucai{
	friend void Print(Sucai &s);
public:
	Sucai() {
		name = "����";
	}
	Sucai(string n) {
		name = n;
	}
	explicit operator bool() const noexcept {
		return !name.empty();
	}
private:
	string name;
};
void Print(Sucai &s) {
	cout << s.name +"���ҵİ�����" << endl;
}
int main(void) {
	Sucai s;
	if (s) {
		Print(s);
	}
	Sucai d("�°���");
	if (d) {
		Print(d);
	}
	return 0;
}