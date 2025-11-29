#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int luachon;
    printf("Chọn chương trình tính toán:\n");
    printf("1. Tính học lực\n");
    printf("2. Giải phương trình bậc nhất\n");
    printf("3. Giải phương trình bậc hai\n");
    printf("4. Tính tiền điện\n");
    printf("5. Thoát\n");
    printf("Nhập lựa chọn của bạn: ");
    if (scanf("%d", &luachon) != 1) {
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    switch (luachon) {
        case 1: {
            double diem;
            printf ("Nhap diem cua ban:");
            if (scanf ("%lf", &diem) != 1) {
                printf("Gia tri khong hop le.\n");
                return 1;
            }
            if (diem >= 9) {
                printf("Hoc Luc Xuat Sac\n");
            } else if (diem >= 8 && diem < 9) {
                printf("Hoc Luc Gioi\n");
            } else if (diem >= 6.5 && diem < 8) {
                printf("Hoc Luc Kha\n");
            } else if (diem >= 5 && diem < 6.5) {
                printf("Trung binh\n");
            } else {
                printf("Hoc Luc Yeu\n");
            }
            break;
        }
        case 2: {
            double a, b;

            printf("Giai phuong trinh bac nhat ax + b = 0\n");
            printf("Nhap a: ");
            if (scanf("%lf", &a) != 1) {
                printf("Gia tri a khong hop le.\n");
                return 1;
            }

            printf("Nhap b: ");
            if (scanf("%lf", &b) != 1) {
                printf("Gia tri b khong hop le.\n");
                return 1;
            }

            if (a == 0.0) {
                if (b == 0.0) {
                    printf("Phuong trinh co vo so nghiem.\n");
                } else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            } else {
                double x = -b / a;
                printf("Phuong trinh co nghiem duy nhat: x = %.6f\n", x);
            }

            break;
        }
        case 3: {
            double a, b, c;
            printf("Giai phuong trinh bac hai ax^2 + bx + c = 0\n");
            printf("Nhap a: ");
            if (scanf("%lf", &a) != 1) {
                printf("Gia tri a khong hop le.\n");
                return 1;
            }
            printf("Nhap b: ");
            if (scanf("%lf", &b) != 1) {
                printf("Gia tri b khong hop le.\n");
                return 1;
            }
            printf("Nhap c: ");
            if (scanf("%lf", &c) != 1) {
                printf("Gia tri c khong hop le.\n");
                return 1;
            }

            if (a == 0.0) {
                /* Reduce to linear equation bx + c = 0 */
                if (b == 0.0) {
                    if (c == 0.0) {
                        printf("Phuong trinh co vo so nghiem.\n");
                    } else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                    } else {
                    double x = -c / b;
                    printf("Phuong trinh bac mot co nghiem: x = %.6f\n", x);
                }
            } else {
                double delta = b * b - 4 * a * c;
                if (delta < 0) {
                    printf("Phuong trinh vo nghiem.\n");
                } else if (delta == 0) {
                    double x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep: x1 = x2 = %.6f\n", x);
                } else {
                    double x1 = (-b + sqrt(delta)) / (2 * a);
                    double x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co hai nghiem phan biet: x1 = %.6f, x2 = %.6f\n", x1, x2);
                }
            }
            break;
        }
        case 4: {
            double soDien, tienDien;
            printf("Nhap so dien tieu thu: ");
            if (scanf("%lf", &soDien) != 1) {
                printf("Gia tri khong hop le.\n");
                return 1;
            }
            if (soDien <= 50) {
                tienDien = soDien * 1000;
            } else {
                tienDien = 50 * 1000 + (soDien - 50) * 1200;
            }
            printf("So tien dien phai tra: %.2f VND\n", tienDien);
            break;
        }
        case 5: {
            printf("Thoat chuong trinh.\n");
            exit(0);
            break;
        }
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
    }
    return 0;

}