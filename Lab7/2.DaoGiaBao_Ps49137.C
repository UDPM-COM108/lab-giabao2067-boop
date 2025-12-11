#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Xin moi nhap vao chuoi: ");
    gets (s);

    int i=0;
    int n=0; //bien de dem so nguyen am
    int p=0; //bien de dem so phu am
    //khi gia tri cuoi cung cua mang !=null
    while(s[i++]!='\0') {
        //Neu s[i]='a' hoac 'i' hoac 'e' hoac 'u' hoac 'o' thi n++
        //nguoc lai p++
        if (s[i] == 'a'||s[i]== 'i'||s[i]== 'e'||s[i]== 'u'||s[i]== 'o'||
            s[i]== 'A'||s[i]== 'I'||s[i]== 'E'||s[i]== 'U'||s[i]== 'O'){ 
                n++;
            } else if ((s[i]>= 'a' && s[i]<= 'z')|| (s[i]>= 'A' && s[i]<='Z')){
                p++;
            }
            printf("Chuoi '%s'co chua %d nguyen am %d phu am.", s, n, p);
        }
            return 0;
        }

   