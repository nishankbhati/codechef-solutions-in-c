#include <stdio.h>
 
int SortAndCount(int freq[7])
{
    int i,j,count,temp;
    for(i=1;i<=6;i++)
    {
        for(j=i+1;j<=6;j++)
        {
            if(freq[i]>freq[j])
            {
                temp=freq[i];
                freq[i]=freq[j];
                freq[j]=temp;
            }
        }
        
    }
    count=4*(freq[1])+2*(freq[2]-freq[1])+(freq[3]-freq[2]);
    //printf("--%d %d %d %d--",freq[0],freq[1],freq[2],freq[3]);
    
    return count;
}
 
 
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j;
	    scanf("%d",&n);
	    int c[100],type[100][100],point[n];
	    for(i=0;i<n;i++)
	    {
            int freq[7]={0};
	        scanf("%d",&c[i]);
	       // point[i]=c[i];
	        for(j=1;j<=c[i];j++)
	        {
	            scanf("%d",&type[i][j]);
	            freq[type[i][j]]++;
	        }
	        point[i]=c[i]+SortAndCount(freq);
	       // printf("%d ",point[i]);
	     }
	     int max=point[0],index=0,check=0;
	     for(i=1;i<n;i++)
	     {
	         if(point[i]>max)
	         {
	             index=i;
	             max=point[i];
	         }
	     }
	     
	     for(i=0;i<n;i++)
	     {
	         if(point[i]==max)
	         {
	             check++;
	         }
	     }
	     //printf("%d ",check);
	     if(check!=1)
	     {
	         printf("tie\n");
	     }
	     
	     else{
	         if(index==0)
	         {
	             printf("chef\n");
	         }
	         else
	         {
	             printf("%d\n",index+1);
	         }
	     }
	     
	       
	   
	}
	
	return 0;
}
