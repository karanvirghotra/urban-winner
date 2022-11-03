#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf("*");
        }

        for(j=n-1;j>=1;j--)
        {
            printf("%d",j);
        }
        
       
        printf("\n");
        
    }
    printf("*");
    return 0;
}