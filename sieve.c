#include <stdio.h>
#include<stdlib.h>

void sieve(long long int *a,long long int n)
{
    long long int i=0,j=0;
    for(i=0;i<=n;i++)
        a[i]=1;
    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            for(j=i;i*j<=n;j++)
            {
                a[i*j]=0;
            }
        }
    }

}

int main()
{
    long long int i,j,n;
    scanf("%lld",&n);
    long long int pm[n+1];
    sieve(&pm[0],n);
    for(i=2;i<=n;i++)
    {
        if(pm[i]==1)
        {
            printf("%lld ",i);
        }
    }
    return 0;
}
