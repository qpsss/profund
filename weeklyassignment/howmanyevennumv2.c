#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลขจำนวนเต็ม 4 จำนวน แล้วหาว่ามีเลขคู่กี่จำนวน (Level 1)
int main()
{
    int num[7], even = 0, i = 0, j = 0;
    for (i; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }
    for (j; j < 4; j++)
    {
        if (num[j] % 2 == 0)
        {
            even++;
        }
    }
    printf("%d", even);
    return 0;
}