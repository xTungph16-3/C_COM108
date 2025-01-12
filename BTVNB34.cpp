#include <stdio.h>

// Bài tập 1: Toán tử số học
int bai1() {
    int a, b;
    printf("Nhap hai so nguyen:\n");
    scanf("%d%d", &a, &b);

    printf("Tong: %d\n", a + b); // Tính tổng
    printf("Hieu: %d\n", a - b); // Tính hiệu
    printf("Tich: %d\n", a * b); // Tính tích
    printf("Thuong: %.2f\n", (double)a / b); // Tính thương với 2 chữ số sau dấu phẩy
    printf("Phan du: %d\n", a % b); // Tính phần dư
}

// Bài tập 2: Toán tử so sánh
int bai2() {
    int a, b;
    printf("Nhap hai so nguyen:\n");
    scanf("%d%d", &a, &b);

    printf("So thu nhat lon hon so thu hai: %s\n", a > b ? "true" : "false"); // Kiểm tra lớn hơn
    printf("So thu nhat nho hon so thu hai: %s\n", a < b ? "true" : "false"); // Kiểm tra nhỏ hơn
    printf("Hai so bang nhau: %s\n", a == b ? "true" : "false"); // Kiểm tra bằng nhau
}

// Bài tập 3: Toán tử logic
void bai3() {
    int a, b, c;
    printf("Nhap ba so nguyen:\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Ca ba so lon hon 0: %s\n", (a > 0 && b > 0 && c > 0) ? "true" : "false"); // Kiểm tra cả ba số lớn hơn 0
}

// Bài tập 4: Kiểm tra số nguyên dương hay âm
int bai4() {
    int n;
    printf("Nhap mot so nguyen:\n");
    scanf("%d", &n);

    if (n > 0) {
        printf("So %d la so nguyen duong.\n", n); // Kiểm tra số nguyên dương
    } else if (n < 0) {
        printf("So %d la so nguyen am.\n", n); // Kiểm tra số nguyên âm
    } else {
        printf("So %d la so 0.\n", n); // Kiểm tra số 0
    }
}

// Bài tập 5: Kiểm tra tính chẵn lẻ
int bai5() {
    int n;
    printf("Nhap mot so nguyen:\n");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("So %d la so chan.\n", n); // Kiểm tra số chẵn
    } else {
        printf("So %d la so le.\n", n); // Kiểm tra số lẻ
    }
}

// Bài tập 6: Tính học lực của sinh viên
int bai6() {
    double toan, van, anh, diemTB;
    printf("Nhap diem Toan, Van, Anh:\n");
    scanf("%lf%lf%lf", &toan, &van, &anh);

    diemTB = (toan + van + anh) / 3.0;
    printf("Diem Toan: %.2lf, Van: %.2lf, Anh: %.2lf\n", toan, van, anh); // In điểm các môn
    printf("Diem trung binh: %.2lf\n", diemTB); // In điểm trung bình

    // Đánh giá xếp loại
    if (diemTB >= 9) {
        printf("Xep loai: Xuat sac\n");
    } else if (diemTB >= 8) {
        printf("Xep loai: Gioi\n");
    } else if (diemTB >= 7) {
        printf("Xep loai: Kha\n");
    } else if (diemTB >= 5) {
        printf("Xep loai: Trung binh\n");
    } else if (diemTB >= 3) {
        printf("Xep loai: Yeu\n");
    } else {
        printf("Xep loai: Kem\n");
    }
}

int main() {
    int choice;
    printf("Chon bai tap (1-6): ");
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
        case 4:
            bai4();
            break;
        case 5:
            bai5();
            break;
        case 6:
            bai6();
            break;
        default:
            printf("Lua chon khong hop le!\n");
            break;
    }

    return 0;
}
