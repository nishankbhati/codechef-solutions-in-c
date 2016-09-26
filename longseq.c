#include <stdio.h>
#include<string.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int zero=0,one=0,len;
	    char s[100000];
	    int i;
	    scanf("%s",s);
	    len=strlen(s);
	    for(i=0;i<len;i++)
	    {
	        if(s[i]=='0')
	            zero++;
	       
	         else
	            one++;
	    }
	    //puts(s);
	    if(one==1 || zero==1)
	        printf("Yes\n");
	   
	    else
	       printf("No\n");
	        
	    } 
	return 0;
}
 
