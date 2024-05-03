#include <stdio.h>
#include <math.h>


int ktrSoChinhPhuong(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}


void inSoChinhPhuong(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (ktrSoChinhPhuong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong n: \n");
    scanf("%d", &n);
    inSoChinhPhuong(n);

    return 0;
}