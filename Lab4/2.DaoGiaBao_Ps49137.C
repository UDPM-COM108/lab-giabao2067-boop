#include <stdio.h>
#include <math.h>

int main()
{//#BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
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

//#Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
int x; // Lấy giá trị từ bàn phím
    int count = 0;
    int u;

    // Nhập Input
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    // Xử lý các trường hợp đặc biệt (x <= 1 không phải số nguyên tố)
    if (x <= 1) {
        printf("%d KHONG PHAI so nguyen to.\n", x);
        return 0; 
    }

    // Thuật toán kiểm tra số nguyên tố
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
            // Có thể thêm break; ở đây để tối ưu tốc độ.
        }
    }

    // Kết luận Output
    if (count == 0) {
        printf("%d LA SO NGUYEN TO.\n", x);
    } else {
        printf("%d KHONG PHAI SO NGUYEN TO.\n", x);
    }
    //#Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
    
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    // Xử lý số âm
    if (x < 0) {
        printf("%d KHONG PHAI la so chinh phuong.\n", x);
        return 0;
    }

    // Tối ưu hóa bằng căn bậc hai:
    // 1. Tính căn bậc hai của x (trả về kiểu double)
    double sqrt_x = sqrt(x);
    
    // 2. Ép kiểu về int để lấy phần nguyên (ví dụ: sqrt(9.0)=3.0 -> 3)
    int root = (int)sqrt_x; 

    // 3. Kiểm tra: root * root có bằng x không?
    // Nếu sqrt_x là 3.0, root là 3 -> 3*3 = 9.
    // Nếu sqrt_x là 3.16, root là 3 -> 3*3 = 9 != 10.
    printf("\nKet qua:\n");
    if (root * root == x) {
        printf("So %d LA SO CHINH PHUONG (%d * %d).\n", x, root, root);
    } else {
        printf("So %d KHONG PHAI LA SO CHINH PHUONG.\n", x);
    }

    return 0;
}