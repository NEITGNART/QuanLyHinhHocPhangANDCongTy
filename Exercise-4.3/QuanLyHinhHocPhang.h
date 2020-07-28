#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <ctype.h>

using namespace std;
class HinhHocPhang;

#define pi acos(-1)
 

class QuanLyHinhHocPhang
{
	vector<HinhHocPhang*> list;
public:
	QuanLyHinhHocPhang() {}
	void AddHinh(HinhHocPhang *h);
	double TongDienTich();
	double TongChuVi();
};

class HinhHocPhang : public QuanLyHinhHocPhang {
protected:

public:
	HinhHocPhang() {}
	virtual double area() = 0;
	virtual double perimeter() = 0;
};

class HinhChuNhat : public HinhHocPhang {
private:
	double a, b;
public:
	HinhChuNhat() {}
	HinhChuNhat(double a, double b): a(a), b(b) {}
	double area();
	double perimeter();
};


class HinhTron : public HinhHocPhang {

private:
	double r;

public:
	HinhTron() {}
	HinhTron(double r) : r(r) {}
	double area();
	double perimeter();

};


class HinhTamGiac : public HinhHocPhang {

private:
	double a, b, c;

public:
	HinhTamGiac() {}
	HinhTamGiac(double a, double b, double c):a(abs(a)), b(b), c(c){}
	double area();
	double perimeter();
};


class HinhThangVuong : public HinhHocPhang {
private:
	double a, b, h;

public:
	HinhThangVuong() {}
	HinhThangVuong(double a, double b, double h): a(a), b(b), h(h) {}
	double area();
	double perimeter();

};







