#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int num,temp,rev,sum=0;
	int a,b,i;
	scanf("%d %d",&a,&b);
		for(i=a;i<b+1;i++)
		{
		rev=0;
		num=i;
		while(num)
			{
			 temp=num%10;
			 rev=(rev*10)+temp;
			 num=num/10;		
			}
			
		if(i==rev)
			{
 			sum=sum+rev;
			}
		}
		printf("%d\n",sum);
	}
return 0;
}
