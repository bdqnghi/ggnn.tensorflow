
void main()
{
	int n;
	int a[301]={0};
	int i,j;
	double aver=0;
	double t=0;
	int u=0;
	int b[301]={0};
	int tem=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		aver+=a[i];
	}

	aver=aver/n;

	for(i=0;i<n;i++)
	{
		if(aver-a[i]>t||a[i]-aver>t)
		{
			t=aver-a[i];
			j=i;
			if(t<0)
				t=0-t;
		}
	}
	for(i=0;i<n;i++)
	{
		if(aver-a[i]-t<0.001&&a[i]+t-aver<0.001)
		{
			b[u]=a[i];
			u++;
		}
		if(a[i]-aver-t<0.001&&aver+t-a[i]<0.001)
		{
			b[u]=a[i];
			u++;
		}

	}
	for(i=u;i>0;i--)
		for(j=0;j<i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				int t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}

	for(i=0;i<u;i++)
	{
		if(tem==0)
		{
			printf("%d",b[i]);
			tem=1;
		}
		else
		{
			printf(",%d",b[i]);
		}
	}

}