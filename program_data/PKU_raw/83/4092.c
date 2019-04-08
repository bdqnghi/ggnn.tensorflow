void main()
{
	int n,i,s=0;
	int a[10],b[10];
	float t=0;
	float c[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]<=100&&b[i]>=90) c[i]=4.0;
		else if(b[i]<=89&&b[i]>=85) c[i]=3.7;
		else if(b[i]<=84&&b[i]>=82) c[i]=3.3;
		else if(b[i]<=81&&b[i]>=78) c[i]=3.0;
		else if(b[i]<=77&&b[i]>=75) c[i]=2.7;
		else if(b[i]<=74&&b[i]>=72) c[i]=2.3;
		else if(b[i]<=71&&b[i]>=68) c[i]=2.0;
		else if(b[i]<=67&&b[i]>=64) c[i]=1.5;
		else if(b[i]<=63&&b[i]>=60) c[i]=1.0;
		t+=c[i]*a[i];
	}
	printf("%.2f",t/s);
}