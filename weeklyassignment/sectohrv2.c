#include<stdio.h>
//จงเขียนโปรแกรมแปลงเวลาจากหน่วยวินาที เป็น ชั่วโมง (Level 3)
int main()
{
    int sec, hr = 0, min = 0;
    scanf("%d", &sec);
    hr = sec/3600;
    min = (sec- hr*3600)/60;
    sec = sec - hr*3600 - min*60;
    if(hr<10)
    {
        printf("0%d:", hr);
    }
    else
    {
        printf("%d:", hr);
    }
    if(min<10)
    {
        printf("0%d:", min);
    }
    else
    {
        printf("%d:", min);
    }
    if(sec<10)
    {
        printf("0%d", sec);
    }
    else
    {
        printf("%d", sec);
    }
    return 0;
}