int main()
{
	int n,a[2][10],i,e,sum1=0;
	double b[10],sum2=0;
	scanf("%d",&n);
	for(i=0;i<2;i++)
	{
		for(e=0;e<n;e++)
		{
			scanf("%d",&a[i][e]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[1][i]>=90&&a[1][i]<=100)
			b[i]=4.0;
		if(a[1][i]>=85&&a[1][i]<=89)
			b[i]=3.7;
		if(a[1][i]>=82&&a[1][i]<=84)
			b[i]=3.3;
		if(a[1][i]>=78&&a[1][i]<=81)
			b[i]=3.0;
		if(a[1][i]>=75&&a[1][i]<=77)
			b[i]=2.7;
		if(a[1][i]>=72&&a[1][i]<=74)
			b[i]=2.3;
		if(a[1][i]>=68&&a[1][i]<=71)
			b[i]=2.0;
		if(a[1][i]>=64&&a[1][i]<=67)
			b[i]=1.5;
		if(a[1][i]>=60&&a[1][i]<=63)
			b[i]=1.0;
		if(a[1][i]<60)
			b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		sum1+=a[0][i];
		sum2+=b[i]*a[0][i];
	}
	printf("%.2lf",sum2/sum1);
	return 0;
}