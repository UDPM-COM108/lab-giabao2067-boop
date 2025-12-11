#include <stdio.h>

int main() {
    int soKwh;
    float tien = 0;
    
    printf("Nhap so kWh: ");
    scanf("%d", &soKwh);
    
    if (soKwh <= 50)
        tien = soKwh * 1678;
    else if (soKwh <= 100)
        tien = 50 * 1678 + (soKwh - 50) * 1734;
    else if (soKwh <= 200)
        tien = 83900 + 50 * 1734 + (soKwh - 100) * 2014;
    else if (soKwh <= 300)
        tien = 170600 + 100 * 2014 + (soKwh - 200) * 2536;
    else if (soKwh <= 400)
        tien = 372000 + 100 * 2536 + (soKwh - 300) * 2834;
    else
        tien = 625600 + (soKwh - 400) * 2927;
    
    printf("Tien dien: %.0f VND\n", tien);
    
    return 0;
}