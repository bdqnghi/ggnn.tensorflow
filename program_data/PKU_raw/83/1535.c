int main()
{
	int n,i;
	scanf("%d",&n);
	float course[10],jidian[10],sum=0,ave=0;
	int mark[10];
	for(i=1;i<=n;i++)
	{
		scanf("%f",&course[i]);
		
	}
	
	for(i=1;i<=n;i++)
	{
		sum+=course[i];
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&mark[i]);
	}
	for(i=1;i<=n;i++)
	{
		
		if(mark[i]>=90&&mark[i]<=100)
			jidian[i]=4.0;
		else if(mark[i]>=85&&mark[i]<=89)
			jidian[i]=3.7;
	    else if(mark[i]>=82&&mark[i]<=84)
			jidian[i]=3.3;
		else if(mark[i]>=78&&mark[i]<=81)
			jidian[i]=3.0;
		else if(mark[i]>=75&&mark[i]<=77)
			jidian[i]=2.7;
		else if(mark[i]>=72&&mark[i]<=74)
			jidian[i]=2.3;
		else if(mark[i]>=68&&mark[i]<=71)
			jidian[i]=2.0;
		else if(mark[i]>=64&&mark[i]<=67)
			jidian[i]=1.5;
		else if(mark[i]>=60&&mark[i]<=63)
			jidian[i]=1.0;
		else 
			jidian[i]=0;

	}
	
	for(i=1;i<=n;i++)
	{
		ave+=course[i]*jidian[i]/sum;
	}
	printf("%.2f",ave);
	return 0;

			
		
	


}