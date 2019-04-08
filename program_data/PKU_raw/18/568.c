int main()
{
	int n;
	int i,j,k;
	int sum=0;
	int l=0;
	int a[100][100];
	int min;
	cin>>n;
	for (k=0;k<n;k++)
	{
		sum=0;
		l=0;
		for (i=0;i<n-l;i++)
			for (j=0;j<n-l;j++)
				cin>>a[i][j];
		while (l<n-1)
		{
			for (i=0;i<n-l;i++)
			{
				min=a[i][0];
				for (j=0;j<n-l;j++)
				{
					if (a[i][j]<min)
						min=a[i][j];					
				}
				for (j=0;j<n-l;j++)
					a[i][j]=a[i][j]-min;
			}
			for (j=0;j<n-l;j++)
			{
				min=a[0][j];
				for (i=0;i<n-l;i++)
				{
					if (a[i][j]<min)
						min=a[i][j];
				}
				for (i=0;i<n-l;i++)
					a[i][j]=a[i][j]-min;
			}
			sum=sum+a[1][1];
			for (i=1;i<n-1-l;i++)
				for (j=0;j<n-l;j++)
					a[i][j]=a[i+1][j];
			for (j=1;j<n-1-l;j++)
				for (i=0;i<n-l;i++)
					a[i][j]=a[i][j+1];
				l++;
		}
		
				
			cout<<sum<<endl;
	}
	return 0;
}