/*
Chef likes strings a lot but he likes palindromic strings even more. 
Today he found an old string s in his garage. The string is so old that some of its characters have faded 
and are unidentifiable now. Faded characters in the string are represented by '.' whereas other characters 
are lower case Latin alphabets i.e ['a'-'z'].
Chef being the palindrome lover decided to construct the lexicographically smallest palindrome by filling 
each of the faded character ('.') with a lower case Latin alphabet. Can you please help him completing the task?
*/
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
