#include<iostream>
using namespace std;
#include"Point.h"
#include"Circle.h"
void globle_isPointandCircle(Circle& c, Point& p) {
	double distance = pow(p.get_x() - c.get_h().get_x(), 2) + pow(p.get_y() - c.get_h().get_y(), 2);//圆心和点之间距离的平方
	int tempr = pow(c.get_r(), 2);//半径的平方
	if (distance > tempr) {
		cout << "全局 点在圆的外面" << endl;
	}
	else if (distance = tempr) {
		cout << "全局 点在圆上" << endl;
	}
	else if (distance < tempr) {
		cout << "全局 点在圆的内部" << endl;
	}
}
int main() {
	//实例化点对象
	Point p;
	p.set_x(10);
	p.set_y(10);
	//实例化圆对象
	Circle c;
	c.set_h(10, 20);
	c.set_r(10);
	c.isPointandCircle(p);
	globle_isPointandCircle(c, p);
	return 0;
}