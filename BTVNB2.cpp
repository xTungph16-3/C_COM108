#include <stdio.h>

// Bài tập 1: In ra thông tin người dùng
int bai1() {
    int tuoi;
    double chieuCao;
    int gioiTinh;
    char tenVietTat;

    printf("Moi nhap tuoi: \n");
    scanf("%d", &tuoi);
    printf("Moi nhap chieu cao: \n");
    scanf("%lf", &chieuCao);
    printf("Moi nhap gioi tinh (1: Nam, 0: Nu): \n");
    scanf("%d", &gioiTinh);
    getchar(); // Để loại bỏ ký tự newline còn lại trong bộ đệm
    printf("Moi nhap ky tu viet tat ten: \n");
    scanf("%c", &tenVietTat);

    printf("-------------IN RA MAN HINH-------------\n");
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2lf \n", chieuCao);
    printf("Gioi tinh: %s\n", gioiTinh ? "Nam" : "Nu");
    printf("Viet tat ten: %c\n", tenVietTat);

    return 0;
}

// Bài tập 2: Tính điểm trung bình
int bai2() {
    int maSoSinhVien;
    double diemTrungBinh;
    char xepLoai;

    printf("Moi nhap ma so sinh vien: \n");
    scanf("%d", &maSoSinhVien);
    printf("Moi nhap diem trung binh: \n");
    scanf("%lf", &diemTrungBinh);
    getchar(); // Để loại bỏ ký tự newline còn lại trong bộ đệm
    printf("Moi nhap xep loai: \n");
    scanf("%c", &xepLoai);

    printf("----- IN RA MAN HINH-------\n");
    printf("Ma so sinh vien: %d\n", maSoSinhVien);
    printf("Diem trung binh: %.2lf\n", diemTrungBinh);
    printf("Xep loai: %c\n", xepLoai);

    return 0;
}

// Bài tập 3: Thông tin sản phẩm
int bai3() {
    int maSanPham;       // Kiểu số nguyên là kiểu số viết liền để lưu trữ mã sản phẩm
    double giaSanPham;   // Kiểu số thực là kiểu số có (.) để lưu trữ giá sản phẩm
    int donViTienTe;     // Kiểu số nguyên để lưu trữ đơn vị tiền tệ (1: USD, 0: VND)

    printf("Moi nhap ma san pham: \n");
    scanf("%d", &maSanPham); // %d để đọc số nguyên
    printf("Moi nhap gia san pham: \n");
    scanf("%lf", &giaSanPham); // %lf để đọc số thực
    getchar(); // Để loại bỏ ký tự newline còn lại trong bộ đệm
    printf("Moi nhap don vi tien te (1: USD, 0: VND): \n");
    scanf("%d", &donViTienTe); // %d để đọc số nguyên

    printf("----- IN RA MAN HINH-------\n");
    printf("Ma san pham: %d\n", maSanPham); // %d để in số nguyên
    printf("Gia: %.2lf\n", giaSanPham); // %.2lf để in số thực với 2 chữ số thập phân như 1.00, 2.50
    printf("Don vi tien te: %s\n", donViTienTe ? "USD" : "VND"); // %s để in chuỗi ký tự như chữ cái 

    return 0;
}

int main() {
    int choice;
    printf("Chon bai tap (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
    return 0;
}