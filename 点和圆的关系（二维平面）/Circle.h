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
	void isPointandCircle(Point& p);//�жϵ��Ƿ���Բ��
	int get_r();
	Point get_h();//��ȡԲ������
private:
	int mr;//�뾶
	Point mh;//Բ��
};

