#include <stdio.h>

//Bai tap 1: In ra thong tin nguoi dung
int bai1(){
	int tuoi;
	double chieuCao;
	int gioiTinh;
	char tenVietTat;
	
	printf("Moi nhap tuoi: \n");
	scanf("%d", &tuoi);
	printf("Moi nhap chieu cao: \n");
	scanf("%lf", &chieuCao);
	printf("Moi nhap gioi tinh (1: Nam , 0: Nu): \n");
	scanf("%d", &gioiTinh);
	getchar();
	printf("Moi nhap ten viet tat: \n");
	scanf("%c", &tenVietTat);
	
	printf("---------IN RA MAN HINH-----------\n");
	printf("Tuoi: %d\n", tuoi);
	printf("Chieu cao: %.2lf\n", chieuCao);
	printf("Gioi tinh: %s\n", gioiTinh ? "Nam" : "Nu");
	printf("Ten viet tat: %c\n", tenVietTat);
	
	return 0;

}

// Bai tap 2: Tinh diem trung binh

int bai2() {
	int maSoSinhVien;
	double diemTrungBinh;
	char xepLoai;
	
	printf("Moi nhap ma so sinh vien: \n");
	scanf("%d", &maSoSinhVien);
	printf("Moi nhap diemTrungBinh: \n");
	scanf("%lf", &diemTrungBinh);
	getchar();
	printf("Moi nhap ky tu xep loai: \n");
	scanf("%c", &xepLoai);
	
	printf("-----IN RA MAN HINH-----\n");
	printf("Ma so sinh vien: %d\n", maSoSinhVien);
	printf("Diem trung binh: %.1lf\n", diemTrungBinh);
	printf("Xep loai: %c\n", xepLoai);
	
	return 0;
	}
	
	//Bai tap 3: Thong tin san pham
	
	// Bai tap 3: Thong tin san pham
int bai3() {
    int maSanPham;
    double giaSanPham;
    int donViTienTe;

    printf("Moi nhap ma san pham: \n");
    scanf("%d", &maSanPham);
    printf("Moi nhap gia san pham: \n");
    scanf("%lf", &giaSanPham);
    getchar();
    printf("Moi nhap don vi tien te (1: USD, 0: VND): \n");
    scanf("%d", &donViTienTe);

    printf("----- IN RA MAN HINH-------\n");
    printf("Ma san pham: %d\n", maSanPham);
    printf("Gia: %.2lf\n", giaSanPham);
    printf("Don vi tien te: %s\n", donViTienTe ? "USD" : "VND");

    return 0;
}

int main(){
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
