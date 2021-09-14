#include <stdio.h>
//จงเขียนฟังก์ชั่น factorial (Level 3)
unsigned long long factorial(int num)
{
    int i;
    unsigned long long fact = 1;
    if (num == 0)
    {
        return 1;
    }
    else if (num > 0)
    {
        for (i = 2; i <= num; i++)
        {
            fact = fact * i;
        }
        return fact;
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