void main()
{
	int a[50000];
	int b[50000];
	int i,j,k,n,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	k=1;
	for (i=0;i<n-1;i++)
	{
		if (i==0)
		{
			if (b[i]<a[i+1])
			{
				k=0;
				break;
		}
		}
		 if ((i!=0)&&(b[i]>=b[i-1]))
		{
		if (b[i]<a[i+1])
		{
			k=0;
			break;
		}
		}
	}

	if (k==1)
	{
		t=b[0];
		for (i=0;i<n;i++)
		{
			if (t<b[i])
			{
				t=b[i];
			}
		}
		printf("%d %d",a[0],t);
	}
	else
		printf("no");

}
