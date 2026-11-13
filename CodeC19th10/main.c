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
// hoặc dùng toán tử 3 ngôi a>b thì xét tiếp a>c in a ko thì in c, nếu a<b thì xét tiếp b>c thì in b sai thì in c
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
// hoặc là áp đụng for từ i = 2 với bước nhảy 2 để ra số chẵn
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

//Bai 16: cho chương trình random ra 1 số từ 1-99, cho ng dùng nhập nào đoán đúng thì th
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//void main() {
//	int n = 0;
//	srand(time(NULL)); // NULL nghĩa là không có gì
//	int dem = 0;
//	int x = rand() %100;// để lấy 2 số thôi, vì x ban đầu số rất lớn, chỉ lấy 2 số đuôi
//	printf("%d", x);
//	do {
//		printf("Nhap so ban doan: \n");
//		scanf_s("%d", &n);
//		if (n>x) printf("Nho hon \n");
//		if (n < x) printf("Lon hon \n"); // để tránh trường hợp =
//		dem += 1;
//	} while (n != x);
//	printf("Chuc mung ban da doan dung so bi mat sau %d lan !\n", dem);
//}

//số tiền khách hàng muốn rút 
// switch + if dành cho process có bước 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int so_du_atm = 20000000; //số dư tài khoản
//	int mat_khau_system = 123456; //mật khẩu hệ thống lưu
//	int mat_khau_user = 0; //mật khẩu người dùng nhập
//	int so_tien_rut = 0; //số tiền muốn rút
//	int step = 1;
//	char lua_chon = 'a';
//	int sai = 0;
//	while (step !=5) {
//		switch (step) {
//		case 1:
//			printf("Nhap mk: "); scanf("%d", &mat_khau_user);
//			if (mat_khau_user == mat_khau_system) {
//				printf("Mat khau da dung !\n");
//				step = 2;
//			}
//			else {
//				sai += 1;
//				if (sai ==4) { //sai quá 3 lần 
//					printf("Da nhap sai mat khau qua 3 lan !\n");
//					step = 5;
//				}
//				else {
//					printf("Da nhap sai mat khau %d lan!\n", sai);
//					step = 6;
//				}
//			}
//			break;
//		case 2:
//			printf("Nhap so tien muon rut: \n"); scanf("%d", &so_tien_rut);
//			step = 3;
//			break;
//		case 3:
//			if (so_tien_rut <= so_du_atm && so_tien_rut > 0) {
//				printf("Dang tien hanh rut tien...\n");
//				step = 4;
//				break;
//			}
//			else {
//				printf("So tien muon rut khong hop le ! Vui long nhap lai ! \n");
//				step = 2;
//				break;
//			}
//		case 4:
//			printf("Ban da rut duoc so tien la: %d\n", so_tien_rut);
//			printf("So tien con lai trong tai khoan la: %d\n", so_du_atm - so_tien_rut);
//			step = 5;
//			break;
//		case 6:
//				printf("Co muon tiep tuc khong y/n?: \n");
//				scanf(" %c", &lua_chon); // nhớ tab 1 cái rồi %c -> " %c"
//				if (lua_chon == 'y') {
//					step = 1;
//					break;
//				}
//				else if (lua_chon=='n'){ 
//					step = 5;
//					break;
//				}
//				else {
//					printf("Vui long nhap lua chon theo y hoac n !\n"); //người dùng dễ unhappy do bắt nhập quài:)))))))
//					step =6;
//					break;
//				}
//		default:
//			break;
//		}
//	} printf("ket thuc! \n"); // hoặc bưng case 5 vào trong bth xong gán đk while !=0 xong khi vào case 5 thì gán step = 0
//}

//tính tiền gửi ngân hàng sau n năm
// nhập vào số tiền gửi ban đầu, tiền lãi mỗi năm và số năm gửi tiền
// tính số tiền nhận được sau n năm (biết lãi tính theo hình thức lãi kép cộng dồn)
//lãi kép viettinbank là 8.2%/năm
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	float tien_gui = 0;
//	int so_nam = 0;
//	float lai_suat = 0;
//	float tien_nhan = 0;
//	printf("Nhap vao so tien gui: \n");
//	scanf("%f", &tien_gui);
//	printf("Nhap vao lai_suat (%/nam): \n");
//	scanf("%f", &lai_suat);
//	printf("Nhap vao so nam: \n");
//	scanf("%d", &so_nam);
//	tien_nhan = tien_gui;
//	for (int i = 1; i <= so_nam;i++) {
//		tien_nhan += tien_nhan * lai_suat / 100;
//	}
//	printf("So tien nhan duoc sau %d nam la: %.0f\n", so_nam, tien_nhan);
//}

// kiem tra so nguyen to
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int so = 0;
//	int kiem_tra_so_nguyen_to = 1;
//	printf("Vui long nhap vao so can kiem tra: \n");
//	scanf("%d", &so);
//	while (so <= 0) {
//		printf("Vui long chi nhap so nguyen duong: \n");
//		scanf("%d", &so);
//	}
//	if (so == 1 || so == 2) {
//		printf("Day la so nguyen to");
//	}
//	for (int i = 2; i < so/2; i++) {
//		if (so% i == 0){
//			kiem_tra_so_nguyen_to = 0;
//			break;
//		} // nếu else ở đây nó kiểm tra 1 case /2 xong nó print ra, giả sử 9 hay 21 cũng tính là snt luôn
//		}
//	if (kiem_tra_so_nguyen_to) {
//		printf("Day la so nguyen to.");
//	}
//	else {
//		printf("Day khong phai la so nguyen to.");
//	}
//	}
//}
//
//nhập vào n, in các số nguyên tố < n
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int n = 0;
//	printf("Vui long nhap vao n: \n");
//	scanf("%d", &n);
//	if (n < 2) {
//		printf("Khong co so nguyen to nao nho hon n.\n");
//	}
//	else {
//		printf("Cac so nguyen to nho hon n la: \n");
//	}
//	for (int h = 1; h < n; h++) {
//		int kiem_tra_so_nguyen_to = 1;
//		for (int i = 2; i <= h / 2; i++) {
//			if (h % i == 0) {
//				kiem_tra_so_nguyen_to = 0;
//				break;
//			} // nếu else ở đây nó kiểm tra 1 case /2 xong nó print ra, giả sử 9 hay 21 cũng tính là snt luôn
//		}
//		if (kiem_tra_so_nguyen_to) {
//			printf("%d \n",h);
//		}
//	}
//	
//}

//bài 6: viết chương trình tìm ước số chung lớn nhất của 2 số nguyên. 
// Nhập 2 số nguyên A,B và in ra màn hình ước chung lớn nhất của A và B
// ucln luôn là số dương
// gán min = a hoặc b (dùng toán tử 3 ngôi)
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int a = 0;
//	int b = 0;
//	int ucln = 0;
//	int truong_hop = 0;
//	printf("Vui long nhap vao so nguyen a: \n");
//	scanf("%d", &a);
//	printf("Vui long nhap vao so nguyen b: \n");
//	scanf("%d", &b);
//	if (a < 0) {
//		a = -a;
//	}
//	if (b < 0) {
//		b = -b;
//	}
//	if (a == 0 || b == 0) {
//		printf("Vui long nhap so khac 0");
//	}
//	else if (a == 1 || b == 1) {
//		printf("Uoc chung lon nhat cua a va b la: 1\n");
//	}
//	else {
//		if (a < b) {
//			for (int i = 1;i <= a / 2;i++) { //hoặc chạy vòng lặp từ b về 1 để tìm số lớn nhất, nma ko dùng được số âm
//				if (a % i == 0 && b % i == 0) {
//					ucln = i;
//				}
//			}
//		}
//		else {
//			for (int i = 1;i <= b / 2;i++) { //hoặc chạy vòng lặp từ b về 1 để tìm số lớn nhất, nma ko dùng được số âm 
//				if (a % i == 0 && b % i == 0) {
//					ucln = i;
//				}
//			}
//		}
//		printf("Uoc chung lon nhat cua a va b la: %d\n", ucln);
//	}
//}

//bài 7: viết chương trình tính tích phân của f(x) = x^2 từ a đến b theo phương pháp hình thang với tần số lấy mẫu 1000 lần
// nhập vào 2 số nguyên a,b và in ra màn hình kết quả của tích phân hàm f(x) trong khoảng từ a đến b
// độ cao hình thang = (b-a)/số hình thang với a là x1
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int a = 0; // cận bắt đầu
//	int b = 0; // cận kết thúc
//	double x1 = 0; // đỉnh cạnh trên hình thang
//	double x2 = 0; // đỉnh cạnh dưới hình thang
//	double h = 0; // delta x, độ cao hình thang
//	double dien_tich = 0;
//	double tong = 0; // tổng diện tích
//	printf("Vui long nhap vao so nguyen a: \n");
//	scanf("%d", &a);
//	printf("Vui long nhap vao so nguyen b: \n");
//	scanf("%d", &b);
//	h = (b - a)*1.0 / 1000; //chia thành 1000 hình thang
//	for (int i = 0; i < 1000;i++) { //khi i=0 thì x1=a
//		x1 = a + i * h; // đi từ a qua i bước dài h 
//		x2 = x1 + h; // vị trí kết thúc theo x1
//		tong += (x1 * x1 + x2 * x2) * h / 2; // công thức S = (f(x1)+f(x2))*(h/2) - diện tích hình thang biểu diễn trên đồ thị
//		// rồi cộng mấy diện tích này lại
//	}
//	printf("Tich phan cua f(x) = x^2 tu %d den %d la: %.4lf\n", a,b,tong);
//}

//bài 8: Viết chương trình tìm bội chung nhỏ nhất của 2 số nguyên.
//nhập vào 2 số nguyên a,b và in ra màn hình bội chung nhỏ nhất của A và B:
// bội chung nhỏ nhất luôn là số nguyên dương => set số âm về dương cho đỡ trường hợp
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int a = 0;
//	int b = 0;
//	int bcnn = 0;
//	printf("Vui long nhap vao so nguyen a: \n");
//	scanf("%d", &a);
//	printf("Vui long nhap vao so nguyen b: \n");
//	scanf("%d", &b);
//	if (a == 0 || b == 0) {
//		printf("Vui long nhap so khac 0.\n");
//	}
//	else {
//		if (a < 0) {
//			a = -a;
//		}
//		if (b < 0) {
//			b = -b;
//		}
//		if (a < b) {
//			for (int i = 1;; i++) { //hoặc cứ cho nó chạy từ số lớn hơn đến a*b
//				if ((b*i) % a == 0) {
//					bcnn = b*i;
//					break;
//				}
//			}
//		}
//		else {
//			for (int i = 1;; i++) { //hoặc cứ cho nó chạy từ số lớn hơn đến a*b
//				if ((a * i) % b == 0) {
//					bcnn = a * i;
//					break;
//				}
//			}
//		}
//		printf("Boi chung nho nhat cua a va b la: %d\n", bcnn);
//	}
//}

//bài 9: Viết chương trình mô phỏng việc trả tiền của máy ATM.
// số tiền nhập vào phải là bội số của 50000
// số tiền phải trả về đầy đủ các mệnh giá từ 50000 đến 500000
// in ra số lượng tờ tiền được rút
// nếu muốn trả đủ mỗi mệnh giá ít nhất 1 tờ thì cần rút trên 850.000, còn trả đủ 4 mệnh giá nhưng 0 tờ được thì không sao
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int tien = 0;
//	int nam_muoi = 1;
//	int mot_tram = 1; 
//	int hai_tram = 1;
//	int nam_tram = 1;
//	printf("Vui long nhap vao so tien can rut (voi so tien la boi so cua 50000 va lon hon 850000 dong): \n");
//	scanf("%d", &tien);
//	if (tien % 50000 != 0 || tien < 850000) { // hoặc ghép 2 điều kiện chạy 1 if
//		printf("Vui long chi nhap so tien la boi so cua 50000 và toi thieu la 850000!\n");
//	}
//	else {
//		tien -= 850000;
//		while (tien > 0) { //chạy từ lớn đến nhỏ 
//			if (tien >= 500000) {   // có thể áp dụng mảng để chạy chia lần lượt các giá trị cho nhanh
//				tien -= 500000;
//				nam_tram += 1;
//			}
//			if (tien >= 200000) {
//				tien -= 200000;
//				hai_tram += 1;
//			}
//			if (tien >= 100000) {
//				tien -= 100000;
//				mot_tram += 1;
//			}
//			if (tien >= 50000) {
//				tien -= 50000;
//				nam_muoi += 1;
//			}
//		}
//		printf("So to 50,000: %d \n", nam_muoi);
//		printf("So to 100,000: %d \n", mot_tram);
//		printf("So to 200,000: %d \n", hai_tram);
//		printf("So to 500,000: %d \n", nam_tram);
//	}
//}

//làm quen với mảng 
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	char str[] = "hello"; //như dưới 
//	char str1[] = {'h','e','l','l','o' }; //như trên 
//	int x = str[1];
//	int y = str[1];
//	printf("%c\n%c\n", x, y); //check thử giống ko:))
//	int a[2] = { 10,20 };
//	int len = sizeof(a) / sizeof(a[0]);
//	for (int i = 0;i < len;i++) {
//		printf("a[%d]: %d\n", i,a[i]);
//	}
//}

// cho mảng ban đầu, cộng tổng các giá trị có trong mảng
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int arr[] = { 2,4,6,8,10 };
//	int sum = 0;
//	int tbc = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len;i++) {
//		sum += arr[i];
//	}
//	printf("Tong la: %d\n", sum);
//	printf("Trung binh cong la: %.1f\n", sum*1.0/len);
//}  

//cho mảng, tìm gtnn, gtln
//#define _CRT_SECURE_NO_WARNINGS //luôn define cái này trước hàm include
//#include <stdio.h>
//void main() {
//	int arr[] = { 4, 9, 2, -1, 7 };
//	int max = arr[0]; //làm chuẩn
//	int min = arr[0];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < len;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if(arr[i] < min){
//			min = arr[i];
//		}
//	}
//	printf("Gia tri lon nhat la: %d\n", max);
//	printf("Gia tri nho nhat la: %d\n", min);
//}

//Bài 5: đếm số nguyên tố trong mảng. Nhập n(1<=n<=100) và số nguyên vào mảng. In các số nguyên tố trong mảng và đếm số lượng. 
// Nếu không có, in "Khong co so nguyen to"
// Cách khác: có thể dùng bien kiem_tra để check snt thay vì gán index = 0 lỡ sau này cần thao tác trên mảng
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include<math.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 }; //không truyền biến vào giá trị khởi tạo ban đầu của mảng
//	int dem = 0;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	while (n < 1 || n>100) {
//		printf("So luong phan tu nhap khong hop le ! Vui long chi nhap trong khoang tu 1-100: \n");
//		scanf("%d", &n);
//	}
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	}
//	for (int i = 0;i < n;i++) {
//		if (mang[i] <= 1) {
//			mang[i] = 0;
//			dem++;
//			continue;
//		}
//		for (int k = 2;k <= sqrt(mang[i]); k++) {
//			if (mang[i] % k == 0) {
//				mang[i] = 0;
//				dem++;
//				break;
//			}
//		}
//	}
//	if (dem == n) {
//		printf("Khong co so nguyen to.");
//	}
//	else {
//		printf("Cac so nguyen to: "); // hoặc print thẳng ở trên vòng lặp lúc check cho nhanh
//		for (int i = 0;i < n;i++) {
//			if (mang[i] != 0) {
//				printf("%d ", mang[i]); 
//			}
//		}
//		printf("\nSo luong: %d", n - dem);
//	}
//}


//bài 6: Đảo ngược mảng. Nhập n(1<=n<=100) và n số nguyên vào mảng. Đảo ngược thứ tự các phần tử ngay trong mảng ban đầu (không dùng mảng phụ) 
//// sau đó in mảng
//#define _CRT_SECURE_NO_WARNINGS //dùng biến gán tạm
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int tam = 0; //biến lưu tạm
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	while (n < 1 || n>100) {
//		printf("So luong phan tu nhap khong hop le ! Vui long chi nhap trong khoang tu 1-100: \n");
//		scanf("%d", &n);
//	}
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	}
//	for (int i = 0;i < n / 2;i++) {
//		tam = mang[i];
//		mang[i] = mang[n - i - 1];
//		mang[n - i - 1] = tam;
//	} printf("Mang sau khi dao nguoc: \n");
//	for (int i = 0;i < n;i++) {
//		printf("%d ", mang[i]);
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS // tham khảo thêm cách dùng mảng phụ
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int dem = 0;
//	int mang_moi[100] = { 0 };
//	printf("Vui long nhap so luong phan tu co trong mang: \n");
//	scanf("%d", &n);
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]); //lưu các phần tử input vào mảng
//		dem++;
//	}
//	for (int i = 0;i < n;i++) {
//		mang_moi[i] = mang[i];
//	}
//	for (int i = 0;i < dem;i++) {    // đảo ngược các phần tử 
//		mang_moi[i] = mang[dem-i-1];  
//	}
//	for (int i = 0; i < dem;i++) {
//		printf("%d ", mang_moi[i]);
//	}
//}

//bài 7:Tìm kiếm phần tử trong mảng. Nhập n (1<=n<=100), n số nguyên và số nguyên x. In tất cả vị trí x xuất hiện trong mảng (vị trí tính từ 1)
// Nếu không có, in "khong tim thay"
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int x = 0;
//	int lap = 0;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	while (n < 1 || n>100) {
//		printf("So luong phan tu nhap khong hop le ! Vui long chi nhap trong khoang tu 1-100: \n");
//		scanf("%d", &n);
//	}
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]); //lưu các phần tử input vào mảng
//	}
//	printf("Vui long nhap vao so can kiem tra: \n");
//	scanf("%d", &x);
//	for (int i = 0; i < n;i++) {
//		if (mang[i] == x) {
//			if (lap == 0) {
//				printf("Vi tri: ");
//			}
//			printf("%d ", i + 1);
//			lap++;
//		}
//	}
//	if (lap == 0) {
//		printf("Khong tim thay");
//	}
//}

//Bài tập thêm: kiểm tra mảng tăng dần
//kiểm tra mảng có tăng nghiêm ngặt hay không - mọi phần tử đứng sau đều lớn hơn phần tử đứng trước
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int kiem_tra = 1;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	}
//	for (int i = 1; i < n;i++) {
//		if (mang[i] < mang[i - 1]) {
//			kiem_tra = 0;
//		}
//	}
//	if (kiem_tra) {
//		printf("Day la mang tang dan. ");
//	}
//	else {
//		printf("Day khong phai la mang tang dan. ");
//	}
//}

//bài 9: sắp xếp mảng tăng dần, sắp xếp theo thứ tự từ nhỏ đến lớn
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int tam = 0;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	}
//	for (int i = 0; i < n;i++) {
//		for (int h = 0; h <n;h++) {
//			if (mang[i] < mang[h]) {
//				tam = mang[i];
//				mang[i] = mang[h];
//				mang[h] = tam;
//			}
//		}
//	} for (int i = 0; i < n;i++) {
//		printf("%d ", mang[i]);
//	}
//}

//bài 10: xóa phần tử tại vị trí k
// nhập mảng n phần tử và vị trí k (tính từ 1)
//// xóa phần tử ở vị trí k, dịch phần tử phía sau sang trái r in mảng mới
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int k = 0;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	} printf("Vui long nhap vi tri k (tinh tu 1): \n");
//	scanf("%d", &k);
//	for (int i = k-1; i < n;i++) {
//		mang[i] = mang[i + 1];
//		mang[i + 1] = mang[i +2];
//	}
//	for (int i = 0; i < n-1;i++) {
//		printf("%d ", mang[i]);
//	}
//}


//bai 11: chèn phần tử vào mảng, nhập mảng n phần tử (1<=n<100), số nguyên x và vị trí k từ 1 đến n+1, chèn x vào vị trí k
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//void main() {
//	int n = 0;
//	int mang[100] = { 0 };
//	int k = 0;
//	int tam = 0;
//	int x = 0;
//	printf("Vui long nhap so luong phan tu co trong mang (1<=n<=100): \n");
//	scanf("%d", &n);
//	printf("Vui long nhap cac phan tu trong mang: \n");
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &mang[i]);
//	}
//	printf("Vui long nhap so nguyen x: \n"); scanf("%d", &x);
//	printf("Vui long nhap so nguyen k: \n"); scanf("%d",)
//
//}
//
//
