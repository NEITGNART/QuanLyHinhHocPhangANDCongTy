#include "QuanLyHinhHocPhang.h"


double HinhChuNhat::area() {
	return a * b;
}
double HinhChuNhat::perimeter() {
	return 2 * (a + b);
}

double HinhTron::area() {
	return pi * r * r;
}
double HinhTron::perimeter() {
	return 2 * pi * r;
}

double HinhTamGiac::area() {
	double p = (abs(a) + abs(b) + abs(c)) /(2);
	return sqrt(p * (p - abs(a)) * (p - abs(b)) * (p - abs(c)));
}
double HinhTamGiac::perimeter() {
	
	return abs(a) + abs(b) + abs(c);
}

double  HinhThangVuong::area() {
	return 0.5*(a + b)*h;
}
double HinhThangVuong::perimeter() {
	double d = sqrt(h * h +  abs(a - b) * abs(a - b));
	return a + b + d + h;
}


void QuanLyHinhHocPhang::AddHinh(HinhHocPhang* h) {
	list.push_back(h);
}
double QuanLyHinhHocPhang::TongDienTich() {

	double sum(0);
	for (vector<HinhHocPhang*>::iterator it = list.begin(); it != list.end(); ++it) {
		sum += (*it)->area();
	}
	return sum;

}
double QuanLyHinhHocPhang::TongChuVi() {
	double sum(0);
	for (vector<HinhHocPhang*>::iterator it = list.begin(); it != list.end(); ++it) {
		sum += (*it)->perimeter();
	}
	return sum;
}