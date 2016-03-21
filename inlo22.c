#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	 int m,n,o,total;
       	 scanf("%d %d %d",&m,&n,&o);
	 total=4*(m-2)+4*(n-2)+4*(o-2);
	 printf("%d\n",total);
	}

return 0;
}
