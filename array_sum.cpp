#include<stdio.h>
int main()
{
    int a[4],i,sum=0;
    printf("Enter 4 element:\n");

    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum=%d",sum);

    return 0;
}