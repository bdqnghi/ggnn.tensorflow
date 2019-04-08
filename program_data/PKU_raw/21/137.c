void main()
{
	int n,a[321],b[321],nb=0,i,j,t;
	double sum=0,max=0,c;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	sum=sum/n;
	for (i=0;i<n;i++)
	{
		c=fabs(sum-a[i]);
		if (c>max) max=c;
	}

	for (i=0;i<n;i++)
	{
		c=fabs(sum-a[i]);
		if (fabs(c-max)<1e-6)
			b[nb++]=a[i];
	}

	for (i=0;i<nb;i++)
		for (j=0;j<nb-1;j++)
			if (b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}

	for (i=0;i<nb;i++)
	{
		printf("%d",b[i]);
		if (i<nb-1)
			printf(",");
	}





}