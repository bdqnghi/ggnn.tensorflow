void main()
{
	float a[2][10],sum,d;sum=0;d=0;
	int i,k,n;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[0][i]);
	}printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[1][i]);
	}printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[1][i]>=90)
			a[1][i]=4.0;
		else if(a[1][i]>=85)
			a[1][i]=3.7;
		else if(a[1][i]>=82)
			a[1][i]=3.3;
		else if(a[1][i]>=78)
			a[1][i]=3.0;
		else if(a[1][i]>=75)
			a[1][i]=2.7;
		else if(a[1][i]>=72)
			a[1][i]=2.3;
		else if(a[1][i]>=68)
		    a[1][i]=2.0;
		else if(a[1][i]>=64)
		    a[1][i]=1.5;
		else if(a[1][i]>=60)
			a[1][i]=1.0;
		else a[1][i]=0;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[0][i]*a[1][i];
		d=d+a[0][i];
	}
	printf("%.2f",sum/d);
}