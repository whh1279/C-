#include<iostream>
#include<string>
using namespace std;
class Biaobai {
public:
	Biaobai(){
		name = "Ã«ÍñÙ»";
	}
	Biaobai(string n) {
		this->name = n;
	}
	void operator()();
	void Print() {
		cout << "°¢ÃÖÍÓ·ð" << endl;
	}
private:
	string name;
};
void Biaobai::operator()() {
	cout << name + "£¬ÄãÕæÃÀ¡£" << endl;
}
int main(void) {
	Biaobai b;
	b.operator()();
	Biaobai c("°¢Ã÷");
	c.operator()();
	c.Print();
	return 0;
}