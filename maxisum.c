#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int n,k,i,largest;
	int a[n],b[n];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
	largest = abs(b[0]);
 
       for (i = 0; i < num; i++) 
	{
 	      if (abs(b[i]) > largest) 
		{
	         largest = abs(b[i]);
	        }
	}


return 0;
}
