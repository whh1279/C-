#include "Circle.h"
void Circle::set_r(int r) {
	mr = r;
}
void Circle::set_h(Point& p) {
	mh.set_x(p.get_x());
	mh.set_y(p.get_y());
}
void Circle::set_h(int x, int y) {
	mh.set_x(x);
	mh.set_y(y);
}
void Circle::isPointandCircle(Point &p) {
	double distance = pow(p.get_x()-mh.get_x(), 2) + pow(p.get_y()-mh.get_y(), 2);//Բ�ĺ͵�֮������ƽ��
	int tempr = pow(mr,2);//�뾶��ƽ��
	if (distance > tempr) {
		cout << "����Բ������" << endl;
	}
	else if (distance = tempr) {
		cout << "����Բ��" << endl;
	}
	else if (distance < tempr) {
		cout << "����Բ���ڲ�" << endl;
	}
}//�жϵ��Ƿ���Բ��
int Circle::get_r() {
	return mr;
}
Point Circle::get_h() {
	return mh;
	
}//��ȡԲ������