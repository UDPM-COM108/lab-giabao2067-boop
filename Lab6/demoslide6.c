#include <stdio.h>
#include "demoslide6.h"

int main(){
    // khoi tao mang 1 chieu
    //int a[5]={9,5,7,6,4};
    // nhap mang 1 chieu
    int a[5];
    for (int j = 0; j < 5; j++)
    {
        printf("Nhap phan tu a[%d]: ",j);
        scanf("%d", &a[j]);
    }

    //duyet mang 1 chieu
    printf("Xuat mang a:");
    for (int i = 0; i < 5; i++)
{
    printf("%d ", a[i]);
}

    // khoi tao mang 2 chieu
    int b[3][3];

    // Nhập mảng 2 chiều
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    return 0;
}