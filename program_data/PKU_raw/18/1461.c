int main()
{
	int k,m,n,a[100][100],i,j,min,sum=0;
	scanf("%d",&n);
	k=m=n;
	while(k--)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		while(--m)
		{
			for(i=0;i<=m;i++)
			{
				min=a[i][0];
				for(j=0;j<=m;j++)
				{
					if(a[i][j]<min) min=a[i][j];
				}
				if(min!=0)
				{
					for(j=0;j<=m;j++) a[i][j]-=min;
				}
			}
			for(i=0;i<=m;i++)
			{
				min=a[0][i];
				for(j=0;j<=m;j++)
				{
					if(a[j][i]<min) min=a[j][i];
				}
				if(min!=0)
				{
					for(j=0;j<=m;j++) a[j][i]-=min;
				}
			}
			sum+=a[1][1];
			for(i=1;i<m;i++) a[0][i]=a[0][i+1];
			for(i=1;i<m;i++) a[i][0]=a[i+1][0];
			for(i=1;i<m;i++)
				for(j=1;j<m;j++) a[i][j]=a[i+1][j+1];
		}
		printf("%d\n",sum);
		sum=0;
		m=n;
	}
	return 0;
}