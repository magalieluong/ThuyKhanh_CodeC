// Bài 1
//#include <stdio.h> //import vào để sử dụng hàm print và scan
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

//// Bài 2
//#include <stdio.h>
//void main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Nhap vao so nguyen a: "); scanf_s("%d", &a);
//	printf("Nhap vao so nguyen b: "); scanf_s("%d", &b);
//	//printf("Nhap 2 so nguyen a, b: "); scanf_s("%d, %d", &a, &b);
//	// hoặc là code như trên, phải đúng format mới chạy được
//	printf("Tong: %d \n", a+b);
//	printf("Hieu: % d \n", a - b);
//	printf("Tich: %d \n", a * b);
//	printf("Thuong: %.2f \n", (float) a / b); // ép kiểu float cho a
//	// hoặc là ép kiểu a qua số thực bằng cách a*1.0 => a số thực
//}


//#include <stdio.h>
//#include <math.h> // để lấy sqrt
//void main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	float x1 = 0;
//	float x2 = 0;
//	float x = 0;
//	printf("Viet chuong trinh giai phuong trinh bac 2: ax^2+bx+c=0 \n");
//	printf("Vui long nhap a, b, c: \n");
//	scanf_s("%d, %d, %d", &a, &b, &c); // nhớ scanf_s hoặc là dùng define no warning
//	if (a == 0) {
//		printf("Gia tri a nhap khong hop le ! \n");
//	}
//	else {
//		int delta = b * b - 4 * a * c;
//		if (delta > 0) {
//			x1 = (-b + sqrt(delta)) / (2 * a); // vậy khai kiểu dữ liệu 1 lần rồi xuống k cần khai nữa ?
//			x2 = (-b - sqrt(delta)) / (2 * a); // sqrt đã trả ra được sẵn double rồi, không cần ép kiểu 
//			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f \n", x1, x2);
//		}
//		else if (delta == 0)
//		{
//			x = -b * 1.0 / (2 * a); //b*1.0 hoặc là 2.0*a hoặc (float)a để ép kiểu về double ngay trong phương trình
//			// do b và a đều là integer nên dù kqua ra 3.(3) thì chỉ print ra 3 nên phải ép kiểu ra double
//			printf("Phuong trinh co 1 nghiem kep x1 = x2 = %.2f \n", x);
//		}
//		else {
//			printf("Phuong trinh vo nghiem \n");
//		}
//	}
//}
//// chọn commit all -> git -> push để update code lên github hoặc commit all -> nút push mũi tên hướng lên kế bên cái master
//


// in bảng cửu chương từ 2 -> 9
//#include <stdio.h>
//void main() {
//	for (int i = 2; i < 10;i++){
//		printf("\nBang cuu chuong %d \n", i);
//		for (int j = 1; j <= 10;j++) {
//			printf("%d * %d = %d \n", i, j, i * j);
//		}
//	}
//}


//yêu cầu người dùng nhập từ bàn phím số tự nhiên n và in ra giai thừa của n
//#include <stdio.h>
//void main() {
//	int n = 0;
//	printf("Vui long nhap vao so tu nhien n \n");
//	scanf_s("%d", &n);
//	int gt = 1;
//	for (int i = 1; i <= n; i++) {
//		gt *= i;
//	}
//	printf("Giai thua cua n la: %d \n", gt);


//yêu cầu người dùng nhập từ bàn phím số tự nhiên n và in ra giai thừa của n áp dụng thêm vòng lặp while
#include <stdio.h>
void main() {
	int n = 0;
	int x = 1;
	while (x==1) {
		printf("Vui long nhap vao so tu nhien n \n");
		scanf_s("%d", &n);
		int gt = 1;
		for (int i = 1; i <= n; i++) { 
			gt *= i;
		}
		printf("Giai thua cua n la: %d \n", gt);
		printf("Vui long nhap 1 neu muon chay tiep \n");
		scanf_s("%d", &x);
	}
	printf("Cam on da su dung chuong trinh");

}