#include <stdio.h>

int main() {
    int number, sum = 0;

    
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    
    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong phai la so nguyen co 4 chu so.\n");
        return 1; 
    }

    
    while (number > 0) {
        sum += number % 10; 
        number /= 10;       
    }

    
    printf("Tong cac chu so cua so vua nhap la: %d\n", sum);

    return 0;
}
