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
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int x = 1;
//	while (x==1) {
//		printf("Vui long nhap vao so tu nhien n \n");
//		scanf_s("%d", &n);
//		int gt = 1;
//		for (int i = 1; i <= n; i++) { 
//			gt *= i;
//		}
//		printf("Giai thua cua n la: %d \n", gt);
//		printf("Vui long nhap 1 neu muon chay tiep \n");
//		scanf_s("%d", &x);
//	}
//	printf("Cam on da su dung chuong trinh");
//
//}

//btvn 30th10
//bài 1: nhap vao mot so nguyen n. Kiem tra n la so duong, so am hay bang 0 + phát triển thêm để người nhập đến khi không muốn nhập nữa
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int x = 1;
//	while (x == 1) {
//		printf("Vui long nhap vao so nguyen n: \n");
//		scanf_s("%d", &n);
//		if (n == 0){
//			printf("n co gia tri =0\n");}
//		else if (n > 0){
//			printf("n la so duong\n");}
//		else{
//			printf("n la so am \n");}
//		printf("Vui long nhap 1 de tiep tuc, nhap 2 de dung: \n");
//		scanf_s("%d", &x);
//	}
//}

//bài 2: nhập vào một số nguyên n. Kiểm tra n là số chẵn hay số lẻ + print cảm ơn 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int x = 1;
//	while (x == 1) {
//		printf("Vui long nhap vao mot so nguyen n: \n");
//		scanf_s("%d", &n);
//		if (n % 2 == 0) {
//			printf("Day la so chan \n");
//		}
//		else {
//			printf("Day la so le \n");
//		}
//		printf("Nhap 1 de tiep tuc, nhap 0 de ket thuc \n");
//		scanf_s("%d", &x);
//	}
//	printf("Cam on da su dung chuong trinh");
//}

//bài 3: nhập vào 2 số nguyên a,b. Tìm và in ra số lớn hơn. Nếu hai số bằng nhau thì thông báo 2 số bằng nhau
//ứng dụng thêm while char
//#include <stdio.h>
//#include <string.h>
//void main() {
//	int a = 0;
//	int b = 0;
//	char x = 'y';//nhớ dùng dấu nháy, khai báo chuỗi char x[]= " "
//	while (x == 'y') {
//		printf("Vui long nhap a,b: \n");
//		scanf_s("%d, %d", &a, &b);
//		if (a > b) {
//			printf("So lon hon la a: %d\n", a);
//		}
//		else if (a < b) {
//			printf("So lon hon la b: %d\n", b);
//		}
//		else {
//			printf("Hai so bang nhau");
//		}
//		printf("Vui long nhap y de tiep tuc, nhap n de dung \n");
//		scanf_s(" %c", &x); //nhớ cách 1 cái trc %c
//	}
//	printf("Cam on da su dung chuong trinh. \n");
//}

//bài 4: nhập vào 3 số nguyên a,b,c. Tìm số lớn nhất trong 3 số 
// sử dùng && cho so sánh 1 biến lớn nhất
//#include <stdio.h>
//void main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	char x = 'y';
//	while (x == 'y') {
//		printf("Nhap 3 so nguyen a, b, c: \n");
//		scanf_s("%d, %d, %d", &a, &b, &c);
//		if (a > b && a > c) {
//			printf("a co gia tri lon nhat. \n");
//		}
//		else if (b > a && b > c) {
//			printf("b co gia tri lon nhat. \n");
//		}
//		else {
//			printf("c co gia tri lon nhat. \n");
//		}
//		printf("Nhap y de tiep tuc, nhap n de dung. \n");
//		scanf_s(" %c", &x);
//	}
//	printf("Cam on da su dung chuong trinh. \n");
//}

//bài 5:  nhập vào chỉ số điện tiêu thụ trong tháng. Tính tiền điện theo quy tắc: 
// 0-50kwh: 1800đ/kWh, 51-100kWh: 2000đ/kWh, 101-200kWh: 2500đ/kWh, 200kWh+: 3000đ/kWh
// áp dụng while nhập nào đúng thì thôi
//#include <stdio.h>
//void main() {
//	float x = 1;
//	printf("Vui long nhap vao chi so dien tieu thu trong thang. \n");
//	scanf_s("%f", &x);
//	float tien_dien = 1;
//	while (x < 0) {
//		printf("Chi so dien tieu thu trong thang khong hop le. Vui long nhap lai: \n");
//		scanf_s("%f", &x);
//	}
//	if (x>=0 && x <= 50) {
//		tien_dien = x * 1800*1.0;
//		printf("Tien dien thang nay cua ban la: %.2f vnd\n", tien_dien); //làm tròn số thập phân nhớ . cái
//	}
//	else if (x > 50 && x<= 100) {
//		tien_dien = 50 * 1800*1.0 + (x-50)*2000;
//		printf("Tien dien thang nay cua ban la: %.2f vnd\n", tien_dien); // dùng float nhớ *1.0
//	}
//	else if (x > 100 && x <= 200) {
//		tien_dien = 50 * 1800*1.0 + 50 * 2000 + (x-100)*2500;
//		printf("Tien dien thang nay cua ban la: %.2f vnd\n", tien_dien);
//	}
//	else{
//		tien_dien = 50 * 1800*1.0 + 50 * 2000 +  100* 2500+ (x-200)*3000;
//		printf("Tien dien thang nay cua ban la: %.2f vnd\n", tien_dien);
//	}
//}

//bài 6: Menu bằng switch 
// Tạo menu:
//==== MENU ====
//1. Cong
//2. Tru
//3. Nhan
//4. Chia
//yêu cầu người dùng nhập 2 số a,b sau đó yêu cầu người dùng nhập lựa chọn và in ra kết quả tương ứng
//#include <stdio.h>
//void main() {
//	int x = 0;
//	int a = 0;
//	int b = 0;
//	int n = 1;
//	while (n == 1) {
//		printf("==== MENU ====\n1. Cong\n2. Tru\n3. Nhan\n4. Chia \n");
//		printf("Vui long nhap a,b: \n");
//		scanf_s("%d, %d", &a, &b);
//		printf("Vui long nhap lua chon tu 1-4: \n");
//		scanf_s("%d", &x);
//		switch (x)
//		{
//		case(1):
//			printf("a+b = %d\n", a + b);
//			break;
//		case(2):
//			printf("a-b = %d\n", a - b);
//			break;
//		case(3):
//			printf("a*b = %d\n", a * b);
//			break;
//		default:
//			printf("a/b = %.2f\n", a*1.0 / b*1.0); //ép kiểu về float để tránh 2/3 = 0
//		}
//		printf("Vui long nhap 1 de tiep tuc, nhap 2 de dung. \n");
//		scanf_s("%d", &n);
//	}
//	printf("Cam on da su dung chuong trinh.");
//}

//bài 7: in số chẵn, yêu cầu người dùng nhập n và in ra tất cả số chẵn trong khoảng từ 1 đến n
//#include <stdio.h>
//void main() {
//	int n = 0;
//	printf("Vui long nhap n: \n");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			printf("%d ", i);
//		}
//	}
//}

//bài 8: tổng từ 1 đến n, yêu cầu người dùng nhập n và in ra kết quả là tổng từ 1 đến n
//#include <stdio.h>
//void main() {
//	int n = 0;
//	printf("Vui long nhap n: ");
//	scanf_s("%d", &n);
//	int sum = 0;
//	for (int i = 0; i <= n; i++) {
//		sum += i;
//	}
//	printf("Tong tu 1 den n la: %d \n", sum);
//}