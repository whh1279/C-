#include<iostream>
#include<string>
using namespace std;
class Sucai{
	friend void Print(Sucai &s);
public:
	Sucai() {
		name = "Õı»Ÿ";
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
	cout << s.name +"£¨Œ“µƒ∞ÆÂ˙£°" << endl;
}
int main(void) {
	Sucai s;
	if (s) {
		Print(s);
	}
	Sucai d("∂¬∞Æ¡·");
	if (d) {
		Print(d);
	}
	return 0;
}