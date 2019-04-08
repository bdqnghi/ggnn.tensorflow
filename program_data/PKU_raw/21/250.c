main()
{
	int i,j,k;
	float sum=0,t,n;
	float a[300];
	float aver,max;
	float b[300];
	scanf("%f",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>aver)
			b[i]=a[i]-aver;
		else
			b[i]=aver-a[i];
	}
	max=b[0];
	for(i=0;i<=n-1;i++)
	{
		if(b[i]>=max)
		{
			max=b[i];
			k=i;
		}
	}
	for(i=0;i<k;i++)
	{
		if(b[i]==max)
			printf("%.0f,",a[i]);
	}
	printf("%.0f",a[k]);
}
