#include <stdio.h>
// kieu cau truc
struct SINHVIEN{
    int MSSV;
    char Hoten[50];
    float diem;
};
int main(){
    struct SINHVIEN SV1 = {52, "Loc", 10};
    printf("Nhap MSSV: ");
    scanf("%d", &SV1.MSSV);
    printf("Nhap Ho ten :");
    scanf("%s", &SV1.Hoten);
    printf("Nhap diem: ");
    scanf("%f", &SV1.diem);

    //Xuat ra thong tin
    printf("MSSV: %d - hoten: %s- diem: %.2s",SV1.MSSV, SV1.Hoten, SV1.diem);
    return 0;
}
