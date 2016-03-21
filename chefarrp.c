#include<stdio.h>
//#define N (1000000001)
#include<string.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	int i,j,n,count;
	long int sum,product;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
		{
		scanf("%d",&A[i]);		
		}
	count=n;
	for(i=0;i<n;i++)
		{
		sum=A[i];
		product=A[i];
		for(j=i+1;j<n;j++)
			{
			sum=sum+A[j];
			product=product*A[j];
			if(sum==product)
				{
				count++;				
				}
			}		
		}
	printf("%d\n",count);	
	
	}

}

