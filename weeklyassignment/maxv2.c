#include<stdio.h>

int main()
{
    int num[7], i, j, temp;
    for(i=0;i<3;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i;i<3;i++)
    {
        if(num[i]>num[i+1])
        {
            j = num[i];
            num[i] = num[i+1];
            num[i+1] = j;
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d", num[i]);
    }
    //printf("%d", num[0]);
    return 0;
}