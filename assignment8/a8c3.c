#include<stdio.h>
int main()
{
        int n,x,i,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                x=x/10;
                s=s+x;
        }
        printf("sum of last digits are %d",s);
}


