#include <stdio.h> //để nhắc lệnh, có pragma once
float tinh_diem_tb(int diem_toan, int diem_ly, int diem_hoa)
{
	float diem_tb = 0; //khai báo
	diem_tb = (diem_toan * 2 + diem_ly + diem_hoa) / 4.0; //hành động hàm làm
	return diem_tb; //return
}
void in_duong_ke(int do_dai) //không trả về giá trị thì ghi void
{
	for (int i = 0;i < do_dai;i++) {
		printf("-");
	} printf("\n");
}
char xep_loai(float diem_tb) { //trả về kí tự
	//char loai = 'F';
	//if (diem_tb >= 8) {
	//	loai = 'A';
	//}
	//else if (diem_tb >= 7.0) {
	//	loai = 'B';
	//}
	//else if (diem_tb >= 5.0) {
	//	loai = 'C';
	//} return loai;
	if (diem_tb >= 8.0) return 'A';
	if (diem_tb >= 7.0) return 'B'; //vì khi return sẽ dừng chương trình nên ghi như này cũng được
	if (diem_tb >= 5.0) return 'C'; //nếu nhiều cái return thì mỗi cái return nên nằm ở 1 cái nhánh khác nhau
	return 'F';// nếu thiếu return thì không có giá trị return về
	// dùng char phải kiểm soát return tốt
}
//int tang_mot(int x) {
//	x = x + 1;
// return x;
//} // nếu dùng truyền tham số bth

// dùng để truyền địa chỉ (tham chiếu)
void tang_mot(int* x) {
	*x = *x + 1;
	printf("Bien x: %d\n", *x);
}

void hoan_doi(int *a, int *b) {
	int tam = *a;
	*a = *b;  // dùng địa chỉ không cần return giá trị 
	*b = tam;
} void chia_lay_du(int a, int b, int*thuong, int*du) {
	*thuong = a / b; //muốn hành động với nhiêu cái giá trị thì truyền bấy nhiêu điạ chỉ
	// nên tách nhỏ chương trình, 1 hàm không nên làm quá nhiều công việc
	*du = a % b;

}