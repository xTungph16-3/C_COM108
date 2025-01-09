#include <stdio.h>

int main() {
    printf("Xin chao Nhan Vien FPT\n"); // In ra thông điệp chào mừng

    // Khai báo biến
    int maSo = 123; // Biến maSo kiểu int
    int tuoi = 250; // Biến tuoi kiểu int
    bool gioiTinh = 1; // Biến gioiTinh kiểu bool (1 cho nam, 0 cho nữ)
    double luong = 13840000; // Biến luong kiểu double
    char bac = 'A'; // Biến bac kiểu char

    // In ra các biến
    printf("Ma so: %d\n", maSo); // In ra mã số
    printf("Tuoi: %d\n", tuoi); // In ra tuổi
    printf("Gioi tinh: %s\n", gioiTinh ? "Nam" : "Nu"); // In ra giới tính
    printf("Luong: %.0lf\n", luong); // In ra lương
    printf("Bac: %c\n", bac); // In ra bậc

    return 0;
}