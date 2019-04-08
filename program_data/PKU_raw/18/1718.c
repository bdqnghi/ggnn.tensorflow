

int main()
{
	int n;
	cin>>n;
	for (int k=0;k<n;k++)
	{
		int a[100][100];
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
				cin>>a[i][j];
		int ans=0;
		for (int nn=n;nn>1;nn--)
		{
			for (int i=0;i<nn;i++)
			{
				int min=50000;
				for (int j=0;j<nn;j++)
					if (min>a[i][j]) min=a[i][j];
				for (int j=0;j<nn;j++)
					a[i][j]-=min;
			}
			for (int i=0;i<nn;i++)
			{
				int min=50000;
				for (int j=0;j<nn;j++)
					if (min>a[j][i]) min=a[j][i];
				for (int j=0;j<nn;j++)
					a[j][i]-=min;
			}
			ans+=a[1][1];
			for (int i=1;i<nn;i++)
				for (int j=0;j<nn;j++)
					a[i][j]=a[i+1][j];
			for (int j=1;j<nn;j++)
				for (int i=0;i<nn;i++)
					a[i][j]=a[i][j+1];
		}
		cout<<ans<<endl;
	}
	return 0;
}