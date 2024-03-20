#include <stdio.h>

void BoiCua7(int min , int max)
{
    for(int i= min ; i <= max ; i++)
    {
        if(i%7 == 0)
        {
            printf("%d \n", i);
        }
    }
}

int main(void){
    int min = 10; // Giới hạn dưới là 10 vì số nguyên có 2 chữ số bắt đầu từ 10
    int max = 99; // Giới hạn trên là 99 vì số nguyên có 2 chữ số kết thúc tại 99
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    BoiCua7(min,max);
    return 0;
}
