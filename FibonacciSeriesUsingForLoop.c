#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextterm;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series: %d\n%d\n",t1,t2);
    for(i=3;i<=n;i++)
    {
        nextterm=t1+t2;
        printf("%d\n",nextterm);
        t1=t2;
        t2=nextterm;
    }
    return 0;
}
