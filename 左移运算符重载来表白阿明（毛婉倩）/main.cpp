#include<iostream>
using namespace std;
#include<string>
class Biaobai {
public:
	Biaobai(string n,string c);

public:
	string content;
	string name;
};
Biaobai::Biaobai(string n, string c) {
	this->name = n;
	this->content = c;
}
void operator <<(ostream& o, Biaobai& b) {
	cout << b.name << "," << b.content << "!";
	cout << endl;
}
int main(void) {
	Biaobai a("°¢Ã÷£¨Ã«ÍñÙ»£©","ÎÒ°®Äã");
	cout << a;
	return 0;
}
