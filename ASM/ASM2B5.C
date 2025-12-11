#include <stdio.h>

int main() {
    int tien, menh[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTo[9] = {0};
    
    printf("Nhap so tien can doi: ");
    scanf("%d", &tien);
    
    printf("\nCac menh gia tien duoc doi ra:\n");
    
    for (int i = 0; i < 9; i++) {
        if (tien >= menh[i]) {
            soTo[i] = tien / menh[i];
            tien = tien % menh[i];
            printf("%d to %d\n", soTo[i], menh[i]);
        }
    }
    
    return 0;
}