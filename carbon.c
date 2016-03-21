#include<stdio.h>

int main()
{
int t;
float cc;  //h=hardness ts=tensilestrength cc=carboncontent
int ts,h;
scanf("%d",&t);
while(t--)
	{
	int check1=0,check2=0,check3=0;
	scanf("%d %f %d",&h,&cc,&ts);
	if(h>50)
		{
		 check1=1;		
		}
	if(cc<0.7)
		{
		 check2=1;
		}
	if(ts>5600)
		{
		 check3=1;
		}
	if(check1==1&&check2==1&&check3==1)
	{
	printf("10\n");	
	}
 	 if(check1==1&&check2==1&&check3==0)
	{
	printf("9\n");	
	}
	  if(check1==0&&check2==1&&check3==1)
	{
	printf("8\n");	
	}
	   if(check1==1&&check2==0&&check3==1)
	{
	printf("7\n");	
	}
	    if((check1==1&&check2==0&&check3==0)||(check1==0&&check2==1&&check3==0)||(check1==0&&check2==0&&check3==1))
	{
	printf("6\n");	
	}
	     if(check1==0&&check2==0&&check3==0)
	{
	printf("5\n");	
	}
	}
return 0;
}
