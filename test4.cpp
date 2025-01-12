#include <stdio.h>
int bai1(){
                int a;
                printf("Nhap so nguyen: ");
                scanf("%d", &a);
                if(a%2==0){
                     printf("So %d la so chan\n", a);
                }else{
                     printf("So %d la so le\n", a);
                }
                return 0;
                  
}

int bai2(){
                int a,b,c;
                printf("Nhap so a=");
                scanf("%d", &a);
                printf("Nhap so b=");
                scanf("%d", &b);
                printf("Nhap so c=");
                scanf("%d", &c);
                //tim max
                int max = a;
                if(b>max){
                    max = b;
                }
                if(c>max){
                    max = c;
                }
                printf("So lon nhat la: %d\n", max);
                // tim min
                int min = a;
                if (b < min)
                {
                    min = b;
                }
                if (c < min)
                {
                    min = c;
                }
                printf("So nho nhat la: %d\n", min);
                {
                return 0;
                }
}

int bai3(){
                double diemToan, dieLy, diemHoa;
                printf("Nhap diem toan: ");
                scanf("%lf", &diemToan);
                printf("Nhap diem ly: ");
                scanf("%lf", &dieLy);
                printf("Nhap diem hoa: ");
                scanf("%lf", &diemHoa);
                double tbc = (diemToan + dieLy + diemHoa) / 3;
                printf("Diem trung binh cong la: %.2lf\n", tbc);
                if (tbc >= 9)
                {
                    printf("Xep loai: Xuat sac\n");
                }
                else if (tbc >= 8)
                {
                    printf("Xep loai: Gioi\n");
                }
                else if (tbc >= 6.5)
                {
                    printf("Xep loai: Kha\n");
                }
                else if (tbc >= 5)
                {
                    printf("Xep loai: Trung binh\n");
                }
                else
                {
                    printf("Xep loai: Yeu\n");
                }
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