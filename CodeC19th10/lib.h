#pragma once //pragma once để tránh trường hợp include 1 thư viện 2 lần 
//(thư viện A trong thư viện B => include thư viện A và B => include thư viện A 2 lần
// file thư viện khai báo hàm 
float tinh_diem_tb(int diem_toan, int diem_ly, int diem_hoa);
void in_duong_ke(int do_dai); //không trả về giá trị thì ghi void
char xep_loai(float diem_tb);
int tich(int a, int b);
void tang_mot(int x);
void hoan_doi(int a, int b);
int chia_lay_du(int a, int b);