void main()
{
	int a[10],b[10],j,n;
	float p=0,q=0,c[10];
	scanf("%d",&n);
	for(j=0;j<=n-1;j++)
	scanf("%d ",&a[j]);
	for(j=0;j<=n-1;j++)
	scanf("%d ",&b[j]);
	for(j=0;j<n;j++)
	{
		if(b[j]>=90&&b[j]<=100)
			c[j]=4.0;
		if(b[j]>=85&&b[j]<=89)
			c[j]=3.7;
		if(b[j]>=82&&b[j]<=84)
			c[j]=3.3;
		if(b[j]>=78&&b[j]<=81)
			c[j]=3.0;
		if(b[j]>=75&&b[j]<=77)
			c[j]=2.7;
		if(b[j]>=72&&b[j]<=74)
			c[j]=2.3;
		if(b[j]>=60&&b[j]<=63)
			c[j]=1.0;
		if(b[j]>=68&&b[j]<=71)
			c[j]=2.0;
		if(b[j]>=64&&b[j]<=67)
			c[j]=1.5;
		if(b[j]<60)
			c[j]=0.0;
	}
	for(j=0;j<=n-1;j++)
		p=p+a[j];
	for(j=0;j<=n-1;j++)
		q=q+a[j]*c[j];
	printf("%.2f",q/p);
}
