int main()
{
	int n,i,k,t,m;
	int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(k=1;k<=n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				m=b[i];
                a[i]=a[i+1];
				b[i]=b[i+1];
				a[i+1]=t;
				b[i+1]=m;
			}
		}
	}
	int ylf=0;
	i=0;
	while(i<n-1 && ylf==0)
	{
		if(b[i]>=a[i+1])
		{
			i++;
			b[i+1]=b[i]>b[i+1]?b[i]:b[i+1];
		}
		else
		{
			ylf=1;
		}
	}
	if(ylf==0)
	{
		printf("%d %d",a[0],b[n-1]);
	}
	else 
	{
		printf("no");
	}
	return 0;
}
