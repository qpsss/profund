#include <stdio.h>
//จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
int main()
{
    char inputfile[107];
    printf("input: ");
    scanf("%[^\n]", inputfile);
    FILE* inputfp;
    inputfp = fopen(inputfile, "r");
    if(inputfp==NULL)
    {
        printf("Can not open file.");
    }
    else
    {
        char outputfile[107];
        printf("output: ");
        scanf(" %[^\n]", outputfile);
        char content[777];
        FILE* outputfp;
        outputfp = fopen(outputfile, "w");
        char ch;
        while((ch = fgetc(inputfp)) != EOF)
        {
            fprintf(outputfp, "%c", ch);
        }
        fclose(outputfp);
    }
    fclose(inputfp);
    return 0;
}