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
	v.push_back("�°���");
	v.push_back("����");
	v.push_back("������");
	v.push_back("�����");
	v.push_back("۬��");
	v.push_back("�޾�");
	v.push_back("����");
	v.push_back("��Ⱥ");
	v.push_back("����");
	v.push_back("��ѧ��");
	v.push_back("���Ѽ�");
	v.push_back("�ܰ���");
	v.push_back("�ܺ�");
	v.push_back("����");
	v.push_back("Ǯ��");
	v.push_back("�ܹ�");
	v.push_back("���");
	v.push_back("����");
	v.push_back("����");
	v.push_back("ë��ٻ");
	vector<string>::iterator begin = v.begin();
	vector<string>::iterator end = v.end();
	for_each(begin,end,Print);
}
int main(void) {
	test();
	cout << "�����ҵ�����" << endl;
	return 0;
}