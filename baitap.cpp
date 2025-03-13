#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string name;        // Tên sinh viên
    string student_id;  // Mã sinh viên
    float gpa;          // GPA của sinh viên

public:
    // Constructor khởi tạo
    SinhVien(string n, string id, float g) {
        name = n;
        student_id = id;
        gpa = g;
    }

    // Getter cho name
    string getName() {
        return name;
    }

    // Setter cho name
    void setName(string n) {
        name = n;
    }

    // Getter cho id
    string getStudentId() {
        return student_id;
    }

    // Setter cho id
    void setStudentId(string id) {
        student_id = id;
    }

    // Getter cho gpa
    float getGpa() {
        return gpa;
    }

    // Setter cho gpa
    void setGpa(float g) {
        if (g >= 0.0 && g <= 4.0) {
            gpa = g;
        } else {
            cout << "GPA không hợp lệ! Vui lòng nhập giá trị từ 0.0 đến 4.0." << endl;
        }
    }

    // Phương thức hiển thị thông tin sinh viên
    void hienThiThongTin() {
        cout << "Sinh viên: " << name << ", Mã sinh viên: " << student_id << ", GPA: " << gpa << endl;
    }
};

int main() {
    // Tạo đối tượng SinhVien
    SinhVien sv1("Nguyễn Văn A", "SV001", 3.5);
    
    // Hiển thị thông tin sinh viên
    sv1.hienThiThongTin();
    
    // Cập nhật GPA và hiển thị lại thông tin
    sv1.setGpa(3.9);
    sv1.hienThiThongTin();

    return 0;
}
