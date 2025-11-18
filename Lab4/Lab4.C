#include <stdio.h>
#include <math.h>

int main(){
int min,max;
printf("Nhap min va max: ");
scanf("%d %d",&min, &max);
int i = min;
float tong = 0, bienDem = 0, trungBinh = 0;
while(i<= max){
    if(i%2==0){
        tong +=i;
        bienDem++;
    }
    i++;
}
trungBinh = tong / bienDem;
printf("Trung binh tong la: %.2f",trungBinh);
return 0;
}