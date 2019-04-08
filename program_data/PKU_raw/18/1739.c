


int main()  //????
{
	const int MAX=50000;
	int n;
	cin>>n;
	for (int k=0;k<n;k++)
	{
		int jz[110][110];
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
				cin>>jz[i][j];
		int ans=0;
		for (int x=0;x<n-1;x++)
		{
			for (int i=0;i<n-x;i++)
			{
				int min=MAX;
				for (int j=0;j<n-x;j++)
					if (jz[i][j]<min) min=jz[i][j];
				for (int j=0;j<n-x;j++)
					jz[i][j]-=min;
			}
			for (int i=0;i<n-x;i++)
			{
				int min=MAX;
				for (int j=0;j<n-x;j++)
					if (jz[j][i]<min) min=jz[j][i];
				for (int j=0;j<n-x;j++)
					jz[j][i]-=min;
			}
			ans+=jz[1][1];
			for (int i=0;i<n-x;i++)
				for (int j=2;j<n-x;j++)
					jz[i][j-1]=jz[i][j];
			for (int i=0;i<n-x;i++)
				for (int j=2;j<n-x;j++)
					jz[j-1][i]=jz[j][i];
		}
		cout<<ans<<endl;
	}
	return 0;
}