#include<iostream>
#include<string>
using namespace std;
template<class T>
void swap(T &a,T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
};
void test() {
	string a = "����";
	string b = "��Ⱥ";
	cout << "����ԭ���������Ǵ������ɫ�������"<<b << endl;
	swap(a,b);
	cout << "����֮�������������Ǵ������ɫ�������" << b << endl;
}
int main(void) {
	test();
	return 0;
}