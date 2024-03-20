#include<stdio.h>
#include <math.h>

int soChinhPhuong(int n) {
    int i = sqrt(n);
    return (i * i == n);
}
int demSoChinhPhuong(int n)
{   
     int dem = 0;
    for (int i = 1; i < n; i++) {
        if (soChinhPhuong(i)) {
            dem++;
        }
    }
    return dem;
}
void xuatChinhPhuongNhoHonN(int n)
{
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (soChinhPhuong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
   int n = 50 ;

    printf("So luong cac so chinh phuong nho hon %d la: %d\n", n,demSoChinhPhuong(n));
    xuatChinhPhuongNhoHonN(n);

    return 0;
    
}