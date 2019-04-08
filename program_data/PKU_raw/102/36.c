
int main()
{
	int n;
	int i,j,k=0,kk=0;
	char zs[9];
	double xb[999],sg[999];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",zs);
		if(zs[0]=='m')
		{
			xb[i]=1;
		}
		if(zs[0]=='f')
		{
			xb[i]=0;
		}
		scanf("%lf",&sg[i]);
	}
	int sx[999];
	int xs[999];
	int e;
	for(i=1;i<=n;i++)
	{
		if(xb[i]==1)
		{
			k++;
			sx[k]=i;
		}
	}
	for(i=1;i<=k-1;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			if(sg[sx[j]]>sg[sx[j+1]])
			{
				e=sx[j];
				sx[j]=sx[j+1];
				sx[j+1]=e;
			}
		}
	}


	for(i=1;i<=n;i++)
	{
		if(xb[i]==0)
		{
			kk++;
			xs[kk]=i;
		}
	}
	for(i=1;i<=kk-1;i++)
	{
		for(j=1;j<=kk-i;j++)
		{
			if(sg[xs[j]]>sg[xs[j+1]])
			{
				e=xs[j];
				xs[j]=xs[j+1];
				xs[j+1]=e;
			}
		}
	}
	printf("%.2lf",sg[sx[1]]);
	for(i=2;i<=k;i++)
	{
		printf(" %.2lf",sg[sx[i]]);
	}
	for(i=kk;i>=1;i--)
	{
		printf(" %.2lf",sg[xs[i]]);
	}
	return 0;
}
