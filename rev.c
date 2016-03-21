#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int num,temp,rev=0;
	scanf("%d",&num);
	while(num)
		{
		 temp=num%10;
		 rev=(rev*10)+temp;
		 num=num/10;		
		}
	printf("%d\n",rev);

	}
return 0;
}
