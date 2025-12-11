#include <stdio.h>

int main() {
    float tienVay, laiSuat, goc, conLai, lai;
    int kyHan;
    
    printf("Nhap tien vay: ");
    scanf("%f", &tienVay);
    printf("Nhap lai suat (%%): ");
    scanf("%f", &laiSuat);
    printf("Nhap ky han (thang): ");
    scanf("%d", &kyHan);
    
    laiSuat /= 100;
    goc = tienVay / kyHan;
    conLai = tienVay;
    
    printf("\nKy\tLai\t\tGoc\t\tTra\t\tCon lai\n");
    
    for (int i = 1; i <= kyHan; i++) {
        lai = conLai * laiSuat;
        conLai -= goc;
        printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n", i, lai, goc, goc + lai, conLai);
    }
    
    return 0;
}