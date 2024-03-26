#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct SinhVien {
    double diemToan, diemLy, diemAnh;
    double diemTrungBinh;

    SinhVien(double toan, double ly, double anh) : diemToan(toan), diemLy(ly), diemAnh(anh) {
        diemTrungBinh = (diemToan + diemLy + diemAnh) / 3.0;
    }
};

// Hàm kiểm tra điểm có nằm trong khoảng 0-10 không
bool kiemTraDiem(double diem) {
    return diem >= 0.0 && diem <= 10.0;
}
bool cmp1(const SinhVien &a, const SinhVien &b){
     return a.diemToan<b.diemToan;
}

bool cmp2(const SinhVien &a, const SinhVien &b){
      return a.diemLy<b.diemLy;
}

bool cmp3(const SinhVien &a, SinhVien &b ){
       return a.diemTrungBinh<b.diemTrungBinh;
}
int main() {
    vector<SinhVien> danhSach;

    // Nhập thông tin sinh viên và kiểm tra điểm
    for (int i = 0; i < 3; ++i) {
        double toan, ly, anh;
        cin >> toan >> ly >> anh;

        if (!kiemTraDiem(toan) || !kiemTraDiem(ly) || !kiemTraDiem(anh)) {
            cout << "Diem phai nam trong khoang tu 0 den 10. Vui long nhap lai.\n";
            --i; // Nhập lại thông tin cho sinh viên này
            continue;
        }

        danhSach.push_back(SinhVien(toan, ly, anh));
    }

    // Sắp xếp theo điểm môn Toán
    cout << "Theo diem mon Toan:\n";
    sort(danhSach.begin(), danhSach.end(), cmp1);
    for (int i = 0; i < danhSach.size(); ++i) {
        cout << "Sinh Vien " << i + 1 << "\t" << danhSach[i].diemToan << "\t" << danhSach[i].diemLy << "\t" << danhSach[i].diemAnh << endl;
    }
    cout << endl;

    // Sắp xếp theo điểm môn Lý
    cout << "Theo diem mon Ly:\n";
    sort(danhSach.begin(), danhSach.end(), cmp2);
    for (int i = 0; i < danhSach.size(); ++i) {
        cout << "Sinh Vien " << i + 1 << "\t" << danhSach[i].diemToan << "\t" << danhSach[i].diemLy << "\t" << danhSach[i].diemAnh << endl;
    }
    cout << endl;

    // Sắp xếp theo điểm trung bình
    cout << "Theo diem trung binh:\n";
    sort(danhSach.begin(), danhSach.end(), cmp3 );
    for (int i = 0; i < danhSach.size(); ++i) {
        cout << "Sinh Vien " << i + 1 << "\t" << danhSach[i].diemTrungBinh << "\t" << danhSach[i].diemToan << "\t" << danhSach[i].diemLy << "\t" << danhSach[i].diemAnh << endl;
    }

    return 0;
}


