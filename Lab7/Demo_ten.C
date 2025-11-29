#include <stdio.h>
#include <conio.h>
int main(){
    char hoten[50], holot[20];
    int tuoi, diem;
    printf ("Nhap ho ten: ");
    scanf ("%s", hoten);
    printf ("Nhap holot: ");
    scanf ("%s", holot);
    fflush(stdin);
    printf ("Nhap tuoi:");
    scanf ("%d", &tuoi);
    printf ("Nhap diem: ");
    scanf ("%f", &diem);
    return 0;
}
