#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
        printf("%c",(96+j));
}
for(k=(i+1);k<=6;k++)
{
printf("%c",(64+k));
}
printf("\n");
}
}
