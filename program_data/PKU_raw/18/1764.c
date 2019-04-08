
int main()
{
int n;
cin>>n;
int a[100][100][2];
for (int p=1;p<=n;p++)
{
	int sum=0;
	for (int i=0;i<=n-1;i++)
	{
		for (int j=0;j<=n-1;j++)
		{
			cin>>a[i][j][1];
			a[i][j][0]=1;
		}

	}
	for (int q=1;q<=n-1;q++)
	{
		for (int i=0;i<=n-1;i++)
		{
			int min = a[i][0][1];
			for (int j=0;j<=n-1;j++)
			{
				if (a[i][j][0]==0)continue;
				if (a[i][j][1]<min)
				{
					min =a[i][j][1];
				}
			}
			for (int j=0;j<=n-1;j++)
			{
				if (a[i][j][0]==0)continue;
				a[i][j][1]-=min;
			}
		}
		for (int i=0;i<=n-1;i++)
		{
			int min=a[0][i][1];
			for (int j=0;j<=n-1;j++)
			{
				if (a[j][i][0]==0)continue;
				if (a[j][i][1]<min)
				{
					min =a[j][i][1];
				}
			}
			for (int j=0;j<=n-1;j++)
			{
				if (a[j][i][0]==0)continue;
				a[j][i][1]-=min;
			}
		}
		sum+=a[q][q][1];
		for (int i=0;i<=n-1;i++)
		{
			a[q][i][0]=0;
			a[i][q][0]=0;
		}
	}
	cout<<sum<<endl;
}
}