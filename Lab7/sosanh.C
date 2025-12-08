#include <stdio.h>
#include <string.h>

int main(){
    char str1[120],str2[20];
    printf("Nhap chuoi so 1: ");
    gets(str1);
    printf("Nhap chuoi so 2: ");
    gets(str2);
    /*if (strcmp(str1, str2) == 0){
        printf("2 chuoi bang nhau.");
    }else if (strcmp(str1, str2) > 0){
        printf("chuoi 1 lon hon chuoi 2");
    }else {
        printf("Chuoi 1 nho hon chuoi 2");
    }
        */
       char str[20];
    printf("nhap chuoi: ");
    gets(str);
    printf("Xuat chuoi 1:%s", str1);
    printf("\n Xuat chuoi 2:%s", str2);
    printf("\nChuoi dao nguoc:%s",strrev(str1));
    printf("\nChuoi da nhap la:%s",str);
    printf("\nChuoi chu thuong la:%s",strlwr(str));
    printf("\nChuoi chu hoa la:%s",strlwr(str));
    if(strstr!=NULL)
        printf("tim thay");
    return 0;
}