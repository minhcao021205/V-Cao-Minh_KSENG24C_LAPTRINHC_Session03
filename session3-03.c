#include <stdio.h>
#define PI 3.14

int main() {
    double r, chuVi, dienTich;

    
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%lf", &r);

    
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}
