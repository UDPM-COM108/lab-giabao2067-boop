#include <stdio.h>

int main() {
    int gioBatDau, gioKetThuc, soGio;
    float tongTien;
    
    printf("Nhap gio bat dau: ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &gioKetThuc);
    
    soGio = (gioKetThuc >= gioBatDau) ? (gioKetThuc - gioBatDau) : (24 - gioBatDau + gioKetThuc);
    
    // Tính tiền
    if (soGio <= 3)
        tongTien = soGio * 150000;
    else
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    
    // Giảm 10% nếu bắt đầu 14-17h
    if (gioBatDau >= 14 && gioBatDau <= 17)
        tongTien *= 0.9;
    
    printf("\nTong tien: %.0f VND\n", tongTien);
    
    return 0;
}