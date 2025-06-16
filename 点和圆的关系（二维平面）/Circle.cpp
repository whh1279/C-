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
	double distance = pow(p.get_x()-mh.get_x(), 2) + pow(p.get_y()-mh.get_y(), 2);//圆心和点之间距离的平方
	int tempr = pow(mr,2);//半径的平方
	if (distance > tempr) {
		cout << "点在圆的外面" << endl;
	}
	else if (distance = tempr) {
		cout << "点在圆上" << endl;
	}
	else if (distance < tempr) {
		cout << "点在圆的内部" << endl;
	}
}//判断点是否在圆上
int Circle::get_r() {
	return mr;
}
Point Circle::get_h() {
	return mh;
	
}//获取圆心坐标