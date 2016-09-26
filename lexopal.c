#include <stdio.h>
#include<string.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char a[22222];
	    scanf("%s",a);
	    int i,len=strlen(a),flag=0;
	    for(i=0;i<len/2;i++)
	    {
	        if(a[i]!=a[len-i-1])
	        {
	            if(a[i]=='.')
	            {
	                a[i]=a[len-i-1];
	            }
	            else if(a[len-i-1]=='.')
	            {
	                a[len-i-1]=a[i];
	            }
	            else
	                flag++;
	        }
	        if(a[i]=='.'&& a[len-1-i]=='.')
	        {
	            a[i]='a';
	            a[len-1-i]='a';
	        }
	    }
	    if(len%2==1)
	    {
	        if(a[len/2]=='.')
	        {
	            a[len/2]='a';
	        }
	    }
	    if(flag==0)
	    {
	        printf("%s",a);
	    }
	    else
	        printf("-1");
	   
	   printf("\n");
	}
	return 0;
}
