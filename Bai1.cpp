#include <stdio.h>
int main(void){
    // Your code here!
    // Sử dụng hàm trong ngôn ngữ C, viết chương trình xuất các số nguyên có 2 chữ số và là bội của 7.
    printf("xuất các số nguyên có 2 chữ số và là bội của 7: ");
    for(int i = 10; i<=99; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
    }
}
