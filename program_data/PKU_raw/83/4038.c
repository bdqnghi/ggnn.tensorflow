int main()
{
	int n,a[2][10],sum=0,i;
	double GPA=0,b[2][10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[0][i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[1][i]);
	}
	for(i=1;i<=n;i++)
	{
        sum=sum+a[0][i];
	}
    for(i=1;i<=n;i++)
	{
		if(a[1][i]>=90) b[1][i]=4.0;
		if(a[1][i]>=85&&a[1][i]<90) b[1][i]=3.7;
		if(a[1][i]>=82&&a[1][i]<85) b[1][i]=3.3;
		if(a[1][i]>=78&&a[1][i]<82) b[1][i]=3.0;
		if(a[1][i]>=75&&a[1][i]<78) b[1][i]=2.7;
		if(a[1][i]>=72&&a[1][i]<75) b[1][i]=2.3;
		if(a[1][i]>=68&&a[1][i]<72) b[1][i]=2.0;
		if(a[1][i]>=64&&a[1][i]<68) b[1][i]=1.5;
		if(a[1][i]>=60&&a[1][i]<64) b[1][i]=1.0;
		if(a[1][i]<60) b[1][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		GPA=GPA+b[1][i]*a[0][i];
	}
	GPA=GPA/sum;
	printf("%.2f",GPA);
}