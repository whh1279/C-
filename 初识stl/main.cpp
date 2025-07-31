#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void Print(string n) {
	cout << n<<" ";
}
void test() {
	vector<string> v;
	v.push_back("¶Â°®Áá");
	v.push_back("Íõ¾ê");
	v.push_back("³ÂÓîÑô");
	v.push_back("Ñî¿ÉĞÀ");
	v.push_back("Û¬·ï");
	v.push_back("ÂŞ¾ê");
	v.push_back("ÕÂÑô");
	v.push_back("ÕÔÈº");
	v.push_back("ÍõÈÙ");
	v.push_back("ÍõÑ§ºì");
	v.push_back("º«¼Ñ¼Ñ");
	v.push_back("ÖÜ°®ÇÙ");
	v.push_back("ÖÜºê");
	v.push_back("ÂŞæÃ");
	v.push_back("Ç®ö©");
	v.push_back("²Ü¹ğ»ª");
	v.push_back("Ìï¶à");
	v.push_back("ÖÜÇß");
	v.push_back("³ÂÑî");
	v.push_back("Ã«ÍñÙ»");
	vector<string>::iterator begin = v.begin();
	vector<string>::iterator end = v.end();
	for_each(begin,end,Print);
}
int main(void) {
	test();
	cout << "¶¼ÊÇÎÒµÄÀÏÆÅ" << endl;
	return 0;
}