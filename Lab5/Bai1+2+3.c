#include <stdio.h>
#include <stdbool.h>

// ----------------------------------------------------------------------
// HAM CHO BAI 1: TIM MAX/MIN TRONG 3 SO
// ----------------------------------------------------------------------

int max_of_three(int a, int b, int c) {
    int max_val = a;
    if (b > max_val) {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }
    return max_val;
}

int min_of_three(int a, int b, int c) {
    int min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }
    return min_val;
}

void bai1() {
    int num1, num2, num3;

    printf("\n======================================================\n");
    printf("--- BAI 1: TIM GIA TRI LON NHAT TRONG 3 SO ---\n");
    printf("Nhap so thu nhat: ");
    if (scanf("%d", &num1) != 1) return;
    printf("Nhap so thu hai: ");
    if (scanf("%d", &num2) != 1) return;
    printf("Nhap so thu ba: ");
    if (scanf("%d", &num3) != 1) return;

    int max_result = max_of_three(num1, num2, num3);
    printf("=> So lon nhat trong 3 so la: %d\n", max_result);
}

// ----------------------------------------------------------------------
// HAM CHO BAI 2: TINH NAM NHUAN
// ----------------------------------------------------------------------

bool is_leap_year(int year) {
    // Cong thuc: (chia het cho 400) HOAC (chia het cho 4 VA khong chia het cho 100)
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

void bai2() {
    int year_input;

    printf("\n======================================================\n");
    printf("--- BAI 2: KIEM TRA NAM NHUAN ---\n");
    printf("Nhap vao mot nam: ");
    if (scanf("%d", &year_input) != 1) return;

    if (is_leap_year(year_input)) {
        printf("=> Nam %d LA nam nhuan.\n", year_input);
    } else {
        printf("=> Nam %d KHONG phai la nam nhuan.\n", year_input);
    }
}

// ----------------------------------------------------------------------
// HAM CHO BAI 3: KIEM TRA SO CHIA HET CHO 5 VA 9
// ----------------------------------------------------------------------

bool check_divisible(int number) {
    // Kiem tra ca 2 dieu kien phai cung dung (AND - &&)
    return (number % 5 == 0 && number % 9 == 0);
    // Co the dung return (number % 45 == 0);
}

void bai3() {
    int number_input;

    printf("\n======================================================\n");
    printf("--- BAI 3: KIEM TRA SO CHIA HET CHO 5 VA 9 ---\n");
    printf("Nhap vao mot so bat ky trong khoang [1, 1000]: ");
    if (scanf("%d", &number_input) != 1) return;

    // Kiem tra pham vi
    if (number_input < 1 || number_input > 1000) {
        printf("! Canh bao: So nhap vao nam ngoai pham vi [1, 1000].\n");
    }

    if (check_divisible(number_input)) {
        printf("=> So %d THOA MAN dieu kien (chia het cho 5 VA chia het cho 9).\n", number_input);
    } else {
        printf("=> So %d KHONG THOA MAN dieu kien (khong chia het cho 5 hoac khong chia het cho 9).\n", number_input);
    }
    printf("======================================================\n");
}

// ----------------------------------------------------------------------
// CHUONG TRINH CHINH
// ----------------------------------------------------------------------

int main() {
    bai1();
    bai2();
    bai3();

    return 0;
}