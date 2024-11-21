#include <stdio.h>

int main() {
    float toan, van, anh; 
    float tong, trungBinh; 

    
    printf("Nhap diem Toán: ");
    scanf("%f", &toan);
    printf("Nhap diem Van: ");
    scanf("%f", &van);
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    
    tong = toan + van + anh;
    trungBinh = tong / 3;

    
    printf("Tong diem: %.2f\n", tong);
    printf("Ðiem trung bình: %.2f\n", trungBinh);

    return 0;
}
