#include <stdio.h>

int main() {
    /* Nhap ngay hom nay -> kiem tra ngay hom nay la ngay chan hay le */
    int ngay;
    printf("Nhap ngay hom nay: ");
    scanf("%d", &ngay);
    if (ngay % 2 == 0) {
        printf("Ngay hom nay la ngay chan: %d\n", ngay);              
    } else {
        printf("Ngay hom nay la ngay le: %d\n", ngay);                
    }

    /* nhap vao diem trung binh hoc luc hanh kiem (char): T- tot, K- kha, Y- yeu */
    double diemTB;
    char hanhKiem;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &diemTB);
    getchar(); // Để loại bỏ ký tự newline còn lại trong bộ đệm
    printf("Nhap hanh kiem (T- tot, K- kha, Y- yeu): ");
    scanf("%c", &hanhKiem);

    // neu diemTB >= 9 va hanhKiem = T -> co hoc bong 
    if (diemTB >= 9 && hanhKiem == 'T') {
        printf("Co hoc bong\n");
    } else {
        printf("Khong co hoc bong\n");
    }

    return 0;
}