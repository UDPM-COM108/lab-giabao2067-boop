#include <stdio.h>

int main() {
    int min, max, i;
    float tong = 0;
    int bienDem = 0;
    float trungBinh = 0;

    // Nhap min va max
    scanf("%d %d", &min, &max);

    // Dam bao min <= max
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    // Tinh va in trung binh cong
    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("%.2f\n", trungBinh);
    } else {
        printf("Khong co so chan.\n");
    }

    return 0;
}