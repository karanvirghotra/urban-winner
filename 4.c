#include <stdio.h>

int main()
{
    int number,sum,r,x,n,n1;
    printf("Enter the starting range");
    scanf("%d",&n);
    
    printf("Enter the ending point");
    scanf("%d",&x);

    for(int i=n;i<=x;i++)
    {
        sum=0;
        n1=i;
        while(n1>0)
        {
            r=n1%10;
            sum+=r*r*r;
            n1=n1/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

