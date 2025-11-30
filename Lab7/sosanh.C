#include <stdio.h>
#include <string.h>

int main(){
    /*
    char str1[20],str2[20];
    printf("Nhap chuoi so 1: ");
    gets(str1);
    printf("Nhap chuoi so 2: ");
    gets(str2);
    */
    /*if (strcmp(str1, str2)==0){
        printf("2 chuoi bang nhau.");
    }else if(strcmp(str1, str2)>0){
        printf("chuoi 1 lon hon chuoi 2.");
    }else if(strcmp(str1, str2)<0){
        printf("chuoi 1 nho hon chuoi 2.");
    }
    */
    /*
    printf("Xuat chuoi 1:%s", str1);
    printf("\n Xuat chuoi 2:%s", str2);
    printf("\nChuoi dao nguoc:%s",strrev(str1));
    */
    /*
    char str[20];
    printf("nhap chuoi: ");
    gets(str);
    printf("\nChuoi da nhap la:%s",str);
    printf("\nChuoi chu thuong la:%s",strlwr(str));
    printf("\nChuoi in hoa la:%s ",strlwr(str));
    */
    char str1[30]="Learning a C is awesome";
    char str2[15]="C";
    if(strstr(str1, str2)!=NULL){
        printf("tim thay");
    }
    return 0;
}