int main()
{
	int n,a[101][101],i,j,t;
	cin>>n;
	for(t=1;t<=n;t++)
	{
		int ti=2,sum=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(ti=2;ti<=n;ti++)
		{
			int mins[101],minl[101];
			for(int p=1;p<=n;p++)
			{
				mins[p]=10000;
				minl[p]=10000;
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(a[i][j]>=0&&a[i][j]<=mins[i])
						mins[i]=a[i][j];
				}
					for(j=1;j<=n;j++)
						a[i][j]=a[i][j]-mins[i];
			}
            for(j=1;j<=n;j++)
			{
				for(i=1;i<=n;i++)
				{
					if(a[i][j]>=0&&a[i][j]<=minl[j])
						minl[j]=a[i][j];
				}
	
					for(i=1;i<=n;i++)
						a[i][j]=a[i][j]-minl[j];
			}
			sum=sum+a[ti][ti];
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(i==ti||j==ti)
						a[i][j]=-1;
				}
			}
		}
		cout<<sum<<endl;
	}
	
	return 0;
}

