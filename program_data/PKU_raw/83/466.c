void main()
{
	int n,i,t;
	int xuefen[10],chengji[10];
	float xuefenjidian[10],jidian[10],sum1=0,sum2=0,zongping;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&chengji[i]);
	}	
	for(i=0;i<n;i++)
	{
		if(chengji[i]>=90&&chengji[i]<=100)
	jidian[i]=4.0;
		else if(chengji[i]>=85&&chengji[i]<=89)
		jidian[i]=3.7;
		else if(chengji[i]>=82&&chengji[i]<=84)
		jidian[i]=3.3;
		else if(chengji[i]>=78&&chengji[i]<=81)
		jidian[i]=3.0;
		else if(chengji[i]>=75&&chengji[i]<=77)
		jidian[i]=2.7;
		else if(chengji[i]>=72&&chengji[i]<=74)
			jidian[i]=2.3;
		else if(chengji[i]>=68&&chengji[i]<=71)
			jidian[i]=2.0;
		else if(chengji[i]>=64&&chengji[i]<=67)
		jidian[i]=1.5;
		else if(chengji[i]>=60&&chengji[i]<=63)
		jidian[i]=1.0;
		else if(chengji[i]>=0&&chengji[i]<=59)
		jidian[i]=0;
		xuefenjidian[i]=xuefen[i]*jidian[i];
	}
	for(i=0;i<n;i++)
	{
		sum1=sum1+xuefenjidian[i];
		sum2=sum2+xuefen[i];
	}
	zongping=sum1/sum2;
	printf("%.2f",zongping);
}