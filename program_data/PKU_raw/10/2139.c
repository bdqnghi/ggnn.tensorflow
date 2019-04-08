int main(void)
{  
   int num;
   int i,j;
   int data[30];
   int dp[30];  
   int max;
   memset(dp,0,sizeof(dp));
   scanf("%d",&num);
   for(i=0;i<num;i++)
		scanf("%d",&data[i]);
   dp[0]=1;
   for(i=1;i<num;i++)
   {    
	   max=1;
		for(j=0;j<i;j++)
        {  
			if((data[i]<=data[j])&&(dp[j]+1>max))
			  max=dp[j]+1;
		}
		dp[i]=max;
   }
   for(i=0;i<num;i++)
	   if(dp[i]>max)
		   max=dp[i];
   printf("%d\n",max);
   return 0;
}