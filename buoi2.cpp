#include <stdio.h>

//bai 1
int bai1(){
                int tuoi;
                printf("Moi nhap tuoi: \n");
                scanf("%d", &tuoi);
                double chieuCao;
                printf("Moi nhao chieu cao: \n");
                scanf("%lf", &chieuCao);
                bool gioiTinh;
                printf("Moi nhap gioiTinh: \n");
                scanf("%d", &gioiTinh);
                getchar();
                char tenVietTat;
                printf("Moi nhap tenVietTat: \n");
                scanf("%c", &tenVietTat);

                printf("-------------IN RA MAN HINH-------------\n");
                printf("Tuoi la: %d\n", tuoi);
                printf("chieu cao: %.lf\n", chieuCao);
                printf("gioi tinh la: %d\n", gioiTinh);
                printf("ten viet tat: %c\n", tenVietTat);

                return 0;
}

//bai 2

int bai2(){
                int maSoSinhVien;
                printf("Moi nhap ma so: \n", maSoSinhVien);
                scanf("%d", &maSoSinhVien);
                double diemTrungBinh;
                printf("Moi nhap diemTrungBinh: \n", diemTrungBinh);
                scanf("%lf", &diemTrungBinh);
                getchar();
                char kyTuXepLoai;
                printf("Moi nhap kyTuXepLoai: \n", kyTuXepLoai);
                scanf("%c", &kyTuXepLoai);

                printf("----- IN RA MAN HINH-------\n");
                printf("Ma so: %d\n", maSoSinhVien);
                printf("Diem trung binh: %0.lf\n", diemTrungBinh);
                printf("Ky tu xep loai: %d\n", kyTuXepLoai);

}

int main() {
    int choice;
    printf("Chon bai tap (1-2): ");
     scanf("%d", &choice);
    switch (choice) {
        case 1:
            bai1();
            break;
        case 2:
            bai2();
            break;
        default:
            printf("Lua chon khong hop le!");
    }
    return 0;
}



