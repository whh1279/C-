#pragma once
#include"Point.h"
#include<cmath>
#include<iostream>
using namespace std;
class Circle
{
public:
	void set_r(int r);
	void set_h(Point& p);
	void set_h(int x,int y);
	void isPointandCircle(Point& p);//判断点是否在圆上
	int get_r();
	Point get_h();//获取圆心坐标
private:
	int mr;//半径
	Point mh;//圆心
};

