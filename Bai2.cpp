#include <stdio.h>
#include <math.h>
int checkSCP(int number, int n)
{
    if(number <= n) return 1;
    return 0;
}
int main(void){
    // Your code here!
    // Viết chương trình đếm và in ra các số chính phương nhỏ hơn n với n là số nguyên dương nhập từ bàn phím. Yêu cầu viết hàm kiểm tra số chính phương và hàm đếm số chính phương. Biết rằng số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên.
    // Ví dụ: với n=50, xuất ra màn hình 7 số chính phương là: 49, 36, 25, 16, 9, 4, 1.
    int n;
    int count = 0;
    printf("chương trình đếm và in ra các số chính phương nhỏ hơn n với n là số nguyên dương nhập từ bàn phím\n");
    printf("Nhap so nguyen n:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n / 2; i++)
    {
        if(checkSCP(i * i, n) == 1){
            printf("%d ", i * i);
            count++;
        }
    }
    printf("Tong so chinh phuong < n: %d", count);
}
