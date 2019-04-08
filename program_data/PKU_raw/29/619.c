int main()
{
	int i,a[100],b[100];
	float c[100];
	a[0]=2;
	b[0]=1;
	a[1]=3;
	b[1]=2;
    for(i=2;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	for(i=0;i<100;i++)
	{
		c[i]=(float)a[i]/b[i];
	}
	int j,n,m,k;
	float s,w[1000];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		s=0;
		scanf("%d",&m);
		for(k=0;k<m;k++)
		{
			s=s+c[k];
		}
		w[j]=s;
	}
	for(j=0;j<n;j++)
	{
		printf("%.3lf\n",w[j]);
	}
	return 0;
	}
    