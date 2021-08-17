#include<stdio.h>
int main() 
{
  int num[7], i=0, tmp,j;
  for(i=0;i<3;i++)
  {
      scanf("%d", &num[i]);
  }
  for(i=0;i<3;i++)
  {
      for(j=i+1;j<3;j++)
      {
          if(num[i]>num[j])
          {
              tmp = num[i];
              num[i] = num[j];
              num[j] =tmp;
          }
      } 
  }
  printf("%d", num[2]);
  return 0;
}