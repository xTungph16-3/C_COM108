#include<stdio.h>

int main() {
   /* BTVN Buổi 2: Khai báo biến và in ra màn hình
- In ra màn hình: “Chào mừng đến với công ty ABC”.
- Khai báo biến maNhanVien có kiểu int, đồng thời gán giá trị cho biến maNhanVien là 456.
- Khai báo biến tuoiNhanVien có kiểu int, đồng thời gán giá trị cho biến tuoiNhanVien là 30.
- Khai báo biến gioiTinhNhanVien có kiểu bool, đồng thời gán giá trị cho biến gioiTinhNhanVien là 0 hoặc 1.
- Khai báo biến luongNhanVien có kiểu double. Sau đó gán giá trị cho biến luongNhanVien là 15.500.000.
- Khai báo biến bacNhanVien có kiểu ký tự, đồng thời gán giá trị cho biến bacNhanVien là X hoặc Y hoặc Z.
- In toàn bộ các biến đã khai báo ra màn hình.
*/
printf("Xin chao Thanh Hoa\n");
int maNhanVien = 456;
int tuoiNhanVien = 30;
bool gioiTinhNhanVien = 0;
double luongNhanVien = 1550000;
char bacNhanVien = 'X';

// In ra các biến

printf("Ma nhan vien: %d\n", maNhanVien); // In ra mã số
printf("Tuoi nhan vien: %d\n", tuoiNhanVien); // In ra tuổi
printf("Gioi tinh nhan vien: %s\n", gioiTinhNhanVien ? "Nam" : "Nu"); // In ra giới tính
printf("Luong nhan vien: %.0lf\n", luongNhanVien); // In ra lương
printf("Bac nhan vien: %c\n", bacNhanVien); // In ra bậc
}