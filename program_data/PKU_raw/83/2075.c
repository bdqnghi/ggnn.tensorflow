int main()
{
	int sz[10],i,j,n,df[10];
	float gd;
    int sum1=0;
	float sum2=0;
	float GPA;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&sz[i]);
		
	}
    for(i=0;i<n;i++)
	{
		sum1+=sz[i];
		
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&df[i]);
	}
	for(i=0;i<n;i++)
	{
		if(df[i]>=90&&df[i]<=100)
		{
			gd=4.0;
		}
		if(df[i]>=85&&df[i]<=89)
		{
			gd=3.7;
		}
		if(df[i]>=82&&df[i]<=84)
		{
			gd=3.3;
		}
		if(df[i]>=78&&df[i]<=81)
		{
			gd=3.0;
		}
		if(df[i]>=75&&df[i]<=77)
		{
			gd=2.7;
		}
		if(df[i]>=72&&df[i]<=74)
		{
			gd=2.3;
		}
		if(df[i]>=68&&df[i]<=71)
		{
			gd=2.0;
		}
		if(df[i]>=64&&df[i]<=67)
		{
			gd=1.5;
		}
		if(df[i]>=60&&df[i]<=63)
		{
			gd=1.0;
		}
		if(df[i]<60)
		{
			gd=0;
		}
		sum2+=gd*sz[i];
	}
	GPA=sum2/sum1;
	printf("%.2f",GPA);
	return 0;
}