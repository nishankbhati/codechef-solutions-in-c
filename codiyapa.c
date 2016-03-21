#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int n,i,count=0;
    scanf("%lld",&n);
	    while (n%2 == 0)
   	 {
        	count++;
        	n = n/2;
    	}
 
    
    	for (i = 3; i <=sqrt(n); i = i+2)
    		{
      
       			 while (n%i == 0)
        		{
        		    count++;
        		    n = n/i;
        		}
    		}
 
    
    	if (n > 2)
        	{
			count++;		
		}
 
// printf("%d\n",count);
	if(count%2==0)
		{
		printf("YES\n");		
		}
	else
		{
		printf("NO\n");
		}

}
return 0;
}
