
int a[200][200][200];

int main()
{
	int n,sum[200];
	int p,k,i,j;
	int min;

	cin>>n;

	for (p=0;p<n;p++)
	{
		sum[p]=0;

		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				cin>>a[p][i][j];

		for (k=0;k<n-1;k++)
		{
			for (i=0;i<n-k;i++)
			{
				min=a[p][i][0];
				for (j=0;j<n-k;j++)
					if (min>a[p][i][j]) min=a[p][i][j];
				for (j=0;j<n-k;j++)
					a[p][i][j]=a[p][i][j]-min;
			}//???
			
			for (j=0;j<n-k;j++)
			{
				min=a[p][0][j];
				for (i=0;i<n-k;i++)
					if (min>a[p][i][j]) min=a[p][i][j];
				for (i=0;i<n-k;i++)
					a[p][i][j]=a[p][i][j]-min;
			}//???

			sum[p]=sum[p]+a[p][1][1];
			//???
			
			for (i=1;i<n-k;i++)
				a[p][i][0]=a[p][i+1][0];
			for (j=1;j<n-k;j++)
				a[p][0][j]=a[p][0][j+1];
			for (i=1;i<n-k;i++)
				for (j=1;j<n-k;j++)
					a[p][i][j]=a[p][i+1][j+1];
			//??
		}
	}
	
	for (p=0;p<n-1;p++)
		cout<<sum[p]<<endl;
	cout<<sum[n-1];

	return 0;
}