#include <stdio.h>

int gia_tri_lon_nhat(int a, int b, int c);
int gia_tri_nho_nhat(int a, int b, int c);
int kiemtranam(int nam);
//Ham bai 1
int gia_tri_lon_nhat(int a, int b, int c) {
    int max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    return max;
}

int gia_tri_nho_nhat(int a, int b, int c) {
    int min = a;
    if(b < min) {
        min = b;
    }
    if(c < min) {
        min = c;
    }
    return min;
}

//Ham bai 2
int kiemtranam(int nam) {
    int flag = 0;
    if(nam % 400 == 0) {
        flag = 1;
    } else if(nam % 4 == 0 && nam % 100 != 0) {
        flag = 1;
    }
    return flag;
}

int main() {
    //Bai 1
    int a,b,c;
    printf("Nhap vao a va b va c: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("\nGia tri lon nhat la: %d",gia_tri_lon_nhat(a,b,c));
    printf("\nGia tri lon nhat la: %d",gia_tri_nho_nhat(a,b,c));

    //Bai 2
    int nam;
    printf("\nNhap vao nam: ");
    scanf("%d",&nam);

    if(kiemtranam(nam)) {
        printf("%d la nam nhuan",nam);
    }
    else {
        printf("%d khong la nam nhuan",nam);
    }
return 0;
}