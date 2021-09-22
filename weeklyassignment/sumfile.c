#include <stdio.h>
//จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” และแสดงใน “b.txt” (Level 4)
int main()
{
    FILE *inputfp;
    int x, y, sum;
    inputfp = fopen("a.txt", "r");
    if (inputfp == NULL)
    {
        printf("Can not open file.");
    }
    else
    {
        FILE *outputfp;
        outputfp = fopen("b.txt", "w");
        {
            while (!feof(inputfp))
            {
                fscanf(inputfp, "%d %d", &x, &y);
                sum = x + y;
                fprintf(outputfp, "%d", sum);
            }
        }
    }
    return 0;
}