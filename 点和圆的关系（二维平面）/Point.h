#pragma once
class Point {
public:
	void set_x(int x) {
		mx = x;
	}
	void set_y(int y) {
		my = y;
	}
	int get_x() {
		return mx;
	}
	int get_y() {
		return my;
	}
private:
	int mx;
	int my;
};