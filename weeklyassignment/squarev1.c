#include <stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นกรอบสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
int main()
{
    int x, i = 1, j = 1;
    scanf("%d", &x);
    for (; i <= x; i++)
    {
        if (i == 1 || i == x)
        {
            for (j = 1; j <= x; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (j = 1; j <= x; j++)
            {
                if (j == 1 || j == x)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
