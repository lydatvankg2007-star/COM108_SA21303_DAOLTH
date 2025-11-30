#include <stdio.h>
#define M 50
#define N 50
void xuatchiahetcho3(int a[M][N], int m, int n);

int main(){
/*
    int a[7]={8,2,6,2,9,1,5};
    int i, j, temp;
        for(i=0;i<6;i++){
            for(j=i+1;j<7;j++){
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    for(i=0;i<7;i++)
    {   
        printf("%d ", a[i]);
    }  
*/

/*
// Khoi tao mang hai chieu bang cach gan gia tri
    int i = 0;
    int j = 0;
    int ma_tran[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ",ma_tran[i][j]);
            }
            printf("\n");
        }
*/
// xuat cac phan tu chia het cho 3 trong mang 2 chieu
void xuatchiahetcho3(int a[M][N], int m, int n){
    printf ("phan tu chia het cho 3: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 3==0)
            {
                printf("%d ", a[i][j]);
            }
            
        }
        
    }
}

    return 0;
}