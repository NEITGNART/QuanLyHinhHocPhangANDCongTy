#include "CongTy.h"

NhanVien::NhanVien(string name, string address)
	: name(name), address(address) {
}

NhanVienThuKy::NhanVienThuKy(string name, string address, string certificate, int reportComplete)
	: NhanVien(name, address) {
	this->certificate = certificate;
	this->reportComplete = reportComplete;
}


NhanVienKyThuat::NhanVienKyThuat(string name, string address, string industryCertificate, int initiative)
	: NhanVien(name, address){
	this->industryCertificate = industryCertificate;
	this->initiative = initiative;

}
void NhanVien::print() {
	cout << name << " (" << address << ") ";
}
void NhanVienThuKy::print() {

	NhanVien::print();
	cout << "[NN:" << " " << certificate << "], " << "bao cao hoan thanh: " << reportComplete;
}

void NhanVienKyThuat::print() {
	NhanVien::print();
	cout << "[Nganh: " << industryCertificate << "], " << "sang tao: " << initiative;
}


void CongTy::ThemNhanVien(NhanVien* nv) {
	list.push_back(nv);
}

ostream& CongTy::DanhSachNV(ostream& os) {
	for (vector<NhanVien*>::iterator it = list.begin(); it != list.end(); ++it) {
		(*it)->print();
		os << endl;
	}
	return os;
}

ostream& CongTy::DanhSachNVXuatSac(ostream& os) {
	for (vector<NhanVien*>::iterator it = list.begin(); it != list.end(); ++it) {
		(*it)->printBezt();
	}
	return os;
}

void NhanVienThuKy::printBezt() {
	if (reportComplete >= 12) {
		NhanVienThuKy::print();
		cout << endl;
	}
}

void NhanVienKyThuat::printBezt() {
	if (initiative >= 6) {
		NhanVienKyThuat::print();
		cout << endl;
	}
}