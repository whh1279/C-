#include<iostream>
using namespace std;
#include"Point.h"
#include"Circle.h"
void globle_isPointandCircle(Circle& c, Point& p) {
	double distance = pow(p.get_x() - c.get_h().get_x(), 2) + pow(p.get_y() - c.get_h().get_y(), 2);//Բ�ĺ͵�֮������ƽ��
	int tempr = pow(c.get_r(), 2);//�뾶��ƽ��
	if (distance > tempr) {
		cout << "ȫ�� ����Բ������" << endl;
	}
	else if (distance = tempr) {
		cout << "ȫ�� ����Բ��" << endl;
	}
	else if (distance < tempr) {
		cout << "ȫ�� ����Բ���ڲ�" << endl;
	}
}
int main() {
	//ʵ���������
	Point p;
	p.set_x(10);
	p.set_y(10);
	//ʵ����Բ����
	Circle c;
	c.set_h(10, 20);
	c.set_r(10);
	c.isPointandCircle(p);
	globle_isPointandCircle(c, p);
	return 0;
}