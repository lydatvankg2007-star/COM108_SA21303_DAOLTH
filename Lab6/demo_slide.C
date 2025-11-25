#include <stdio.h>

int main(){
    // Khoi tao mang 1 chieu 
    // int a[5]=(9,5,7,6,4);
    // nhap mang 1 chieu 
    int a[5];
    for (int j = 0; j < 5; j++)
    {
        printf("Nhap phan tu a[%d]: ",j);
        scanf("%d", &a[j]);
    }

    // Duyet mang 1 chieu
    printf("xuat mang a: ");
    for (int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    //Khoi tao mang 2 chieu
    int b[3][3];
    // Nhập mảng 2 chiều
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
   return 0;
}