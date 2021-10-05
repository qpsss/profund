#include <stdio.h>
#include<math.h>
//จงเขียนโปรแกรมเพื่อตรวจสอบว่าเป็น จตุรัสกล หรือไม่ (Level 5)
int main()
{
    int m, n;
    scanf("%d", &n);
    int s[70][70], i, j, sum, count=0,countone=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]==1)
            {
                countone++;
            }
        }
    }
    if(countone==n*n)
    {
        printf("NO");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum += s[i][j];
        }
        m=sum;
        if(sum==m)
        {
            count++;
            sum=0;
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            sum += s[i][j];
        }
        if(sum==m)
        {
            count++;
            sum=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum += s[i][j];
            }
        }
        if(sum==m)
        {
            count++;
            sum=0;
        }
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum += s[i][j];
            }
        }
        if(sum==m)
        {
            count++;
            sum=0;
        }
    }
    if(count==(n*2)+2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}