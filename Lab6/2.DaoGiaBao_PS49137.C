#include <stdio.h>

// Hàm tính trung bình các số chia hết cho 3
void bai1_trungBinhChiaHetCho3(int mang[], int n) {
    printf("\n===== BAI 1: TINH TRUNG BINH CAC SO CHIA HET CHO 3 =====\n");
    
    float tong = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            count++;
        }
    }
    
    if (count > 0) {
        float tb = tong / count;
        printf("Cac so chia het cho 3: ");
        for (int i = 0; i < n; i++) {
            if (mang[i] % 3 == 0) {
                printf("%d ", mang[i]);
            }
        }
        printf("\n");
        printf("Tong cac so chia het cho 3: %.0f\n", tong);
        printf("So luong cac so chia het cho 3: %d\n", count);
        printf("Trung binh cong: %.2f\n", tb);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang!\n");
    }
}

// Hàm tìm giá trị lớn nhất và nhỏ nhất
void bai2_timMinMax(int mang[], int n) {
    printf("\n===== BAI 2: TIM GIA TRI LON NHAT VA NHO NHAT =====\n");
    
    int max = mang[0];
    int min = mang[0];
    
    for (int i = 0; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }
    
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

// Hàm sắp xếp mảng theo thứ tự giảm dần
void bai3_sapXepGiamDan(int mang[], int n) {
    printf("\n===== BAI 3: SAP XEP MANG THEO THU TU GIAM DAN =====\n");
    
    // Tạo bản sao mảng để không thay đổi mảng gốc
    int mangTemp[n];
    for (int i = 0; i < n; i++) {
        mangTemp[i] = mang[i];
    }
    
    // Sắp xếp mảng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mangTemp[j] < mangTemp[j + 1]) {
                int temp = mangTemp[j];
                mangTemp[j] = mangTemp[j + 1];
                mangTemp[j + 1] = temp;
            }
        }
    }
    
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("Vi tri thu mang[%d] la: %d\n", i, mangTemp[i]);
    }
}

int main() {
    int n;
    
    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    // Tạo mảng với n phần tử
    int mang[n];
    
    // Nhập các phần tử vào mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }
    
    // Gọi các hàm để thực hiện 3 bài tập
    bai1_trungBinhChiaHetCho3(mang, n);
    bai2_timMinMax(mang, n);
    bai3_sapXepGiamDan(mang, n);
    
    return 0;
}