#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int m,n;
	long long int num,k;
	scanf("%d %d",&m,&n);
	num=((m)*(n)*(m+1)*(n+1))/4;
	k=num%1000000007;
	printf("%lld\n",k);	
		
	}
return 0;
}
