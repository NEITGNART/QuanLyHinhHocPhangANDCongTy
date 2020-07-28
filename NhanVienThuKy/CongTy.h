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
class NhanVien;
class CongTy
{
	vector<NhanVien*> list;
public:
	CongTy() {}
	void ThemNhanVien(NhanVien* nv);
	ostream& DanhSachNV(ostream& os);
	ostream& DanhSachNVXuatSac(ostream& os);

};


class NhanVien {
	string name;
	string address;
public:
	NhanVien() {}
	NhanVien(string name, string address);
	virtual void print() = 0;
	virtual void printBezt() = 0;
};

class NhanVienThuKy : public NhanVien {
	string certificate;
	int reportComplete;
public:
	NhanVienThuKy(string name, string address, string certificate, int reportComplete);
	void print();
	void printBezt();
};

class NhanVienKyThuat : public NhanVien {

	string industryCertificate;
	int initiative;
public:
	NhanVienKyThuat(string name, string address, string industryCertificate, int initiative);
	void print();
	void printBezt();
};
