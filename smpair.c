#include<stdio.h>
 
int main()
{
int t,T;
int N,ary[100000],i,j,min1,min2;
scanf("%d",&t);
for(T=0;T<t;T++)
	{
	min1=10000001,min2=10000001;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
		scanf("%d",&ary[i]);		
		}
		
	for(i=0;i<N;i++)
		{
		if(ary[i]<min1)
		   {
		    min1=ary[i];		
		    j=i;
		   }		
		}
	for(i=0;i<j;i++)
	  if(ary[i]<min2)
	min2=ary[i];
	for(i=j+1;i<N;i++)
	 min2=ary[i];

	printf("%d\n",min1+min2);
	}


return 0;
}
