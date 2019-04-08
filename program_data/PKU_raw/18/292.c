main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	int sum=0;
	int a[101][101];
	int min;
	int l;
	int p;
	int t;
	for(t=1;t<=n;t++)
	{
		sum=0;
		l=n;
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[j][k]);
			}
		}
		for(p=1;p<n;p++)
		{
			for(i=0;i<l;i++)
			{
				for(j=1;j<l;j++)
				{
					if(a[i][j]==0)
						break;
				}
				min=a[i][0];
				for(j=1;j<l;j++)
				{
					if(a[i][j]<min)
						min=a[i][j];
				}
				for(j=0;j<l;j++)
				{
					a[i][j]=a[i][j]-min;
				}
			}
			for(i=0;i<l;i++)
			{
				for(j=1;j<l;j++)
				{
					if(a[j][i]==0)
						break;
				}
				min=a[0][i];
				for(j=1;j<l;j++)
				{
					
					if(a[j][i]<min)
						min=a[j][i];
				}
				for(j=0;j<l;j++)
				{
					a[j][i]=a[j][i]-min;
				}
			}
			sum=sum+a[1][1];
			if(l==2)
				break;
			for(i=1;i<l-1;i++)
			{	
				a[0][i]=a[0][i+1];
				a[i][0]=a[i+1][0];
				for(j=1;j<l-1;j++)
				{
					a[i][j]=a[i+1][j+1];
				}
			}
			l--;	
		}
		printf("%d\n",sum);
	}	
}