#include<stdio.h>
int main()
{
    int num[7], i, j;
    for(i=0;i<3;i++)
    {
        scanf("%d", &num[i]);
    }
    i = 0;
    for(i;i<3;i++)
    {
        if(num[i]>num[i+1])
        {
            j = num[i];
            num[i] = num[i+1];
            num[i+1] = j;
        }
    }
    printf("%d", num[2]);
    return 0;
}