#include <stdio.h>
//จงเขียนฟังก์ชั่น factorial (Level 3)
unsigned long long factorial(unsigned long long num)
{
    if (num == 0)
    {
    return 1;
    }
    else
    {
    return (num*factorial(num-1));
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("error");
    }
    if (num >= 0)
    {
        printf("%lld", factorial(num));
    }
    return 0;
}