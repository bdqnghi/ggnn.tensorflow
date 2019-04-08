int main()
{
	int a[100][100];
	int i,j,k,n,sum,min=0,m;
	cin>>n;
	for(m=0;m<n;m++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		sum=0;
		for(k=0;k<n-1;k++)
		{
			for(i=0;i<n-k;i++)
			{
				min=a[i][0];
				for(j=0;j<n-k;j++)
				{
					if(a[i][j]<min)
						min=a[i][j];
				}
				for(j=0;j<n-k;j++)
					a[i][j]=a[i][j]-min;
			}
			for(j=0;j<n-k;j++)
			{
				min=a[0][j];
				for(i=0;i<n-k;i++)
				{
					if(a[i][j]<min)
						min=a[i][j];
				}
				for(i=0;i<n-k;i++)
					a[i][j]=a[i][j]-min;
			}
			sum=sum+a[1][1];
			for(i=0;i<n;i++)
			{
				for(j=1;j<n-1;j++)
					a[i][j]=a[i][j+1];
				a[i][n-1]=0;
			}
			for(j=0;j<n-1;j++)
			{
				for(i=1;i<n-1;i++)
					a[i][j]=a[i+1][j];
				a[n-1][j]=0;
			}

		}
		cout<<sum<<endl;
	}
	return 0;
}