#include<stdio.h>
int main()
{
int t,test;
scanf("%d",&test);
for(t=0;t<test;t++)
	{
	int n=0,N;
	scanf("%d",&N);

	n+=N/100;
	N=N%100;
	
	n+=N/50;
	N=N%50;
	//written by nishank bhati aka swamicoder
	n+=N/10;
	N=N%10;
	
	n+=N/5;
	N=N%5;
	
	n+=N/2;
	N=N%2;
	
	n+=N;

	printf("%d\n",n);	
	}
return 0;
}


/*
    #include<stdio.h>
    int main()
    {
    int T,N,i,no;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        no=0;
        scanf("%d",&N);
        no+=N/100;
        N=N%100;
        no+=N/50;
        N=N%50;
        no+=N/10;
        N=N%10;
        no+=N/5;
        N=N%5;
        no+=N/2;
        N=N%2;
        no+=N;
        printf("%d\n",no);
    }
    return 0;
    }
  */   
