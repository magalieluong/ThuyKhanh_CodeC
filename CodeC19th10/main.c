// Bài 1
//#include <stdio.h>
//void main()
//{
//	char x = 0; // biến cục bộ cứ khởi tạo giá trị, gán đại giá trị nào cũng được, trong limit cho phép
//	printf("Vui long nhap vao ky tu bat ki: ");
//	scanf_s("%c", &x); // scan ko xuống dòng, hoặc là scanf_s hoặc là define hàm no warning
//	// scanf_s trả về scan thành công hay không thành công
//	printf("he 10: %d \n", x); 
//	printf("he 16: %x \n", x);
//	printf("ascii: %c", x);
//	// ctrl / để note
//	// bỏ con trỏ chuột 1 dòng ctrl D để copy ra 1 dòng, còn nhiều dòng thì bôi đên ctrl D = để copy nhanh
//	// nhấn alt xong mũi tên lên xuống để di chuyển vị trí dòng code
//}

// Bài 2
#include <stdio.h>
void main()
{
	int a = 0;
	int b = 0;
	printf("Nhap vao so nguyen a: "); scanf_s("%d", &a);
	printf("Nhap vao so nguyen b: "); scanf_s("%d", &b);
	//printf("Nhap 2 so nguyen a, b: "); scanf_s("%d, %d", &a, &b);
	// hoặc là code như trên, phải đúng format mới chạy được
	printf("Tong: %d \n", a+b);
	printf("Hieu: % d \n", a - b);
	printf("Tich: %d \n", a * b);
	printf("Thuong: %.2f \n", (float) a / b); // ép kiểu float cho a
	// hoặc là ép kiểu a qua số thực bằng cách a*1.0 => a số thực
}


