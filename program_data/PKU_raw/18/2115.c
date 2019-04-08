int main()
{
	int n,a[100][100],i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		for(l=0;l<n-1;l++)
		{
			for(j=0;j<n-l;j++)
			{
				int min=a[j][0];
				for(k=0;k<n-l;k++)
				{
					if(a[j][k]<min)
						min=a[j][k];
				}
				for(k=0;k<n-l;k++)
					a[j][k]=a[j][k]-min;
			}
			for(j=0;j<n-l;j++)
			{
				int min=a[0][j];
				for(k=0;k<n-l;k++)
				{
					if(a[k][j]<min)
						min=a[k][j];
				}
				for(k=0;k<n-l;k++)
				{
					a[k][j]=a[k][j]-min;
				}
			}
							
			sum+=a[1][1];

			for(j=1;j<n-l-1;j++)
				a[0][j]=a[0][j+1];
			for(j=1;j<n-l;j++)
				a[j][0]=a[j+1][0];
			for(j=1;j<n-l-1;j++)
				for(k=1;k<n-l-1;k++)
					a[j][k]=a[j+1][k+1];
		}
		printf("%d\n",sum);
	}
	
	return 0;
} 