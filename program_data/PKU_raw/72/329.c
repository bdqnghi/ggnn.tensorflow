int main()
{
	int a[22][22]={0};
	int num=0;
	int hang[100]={0},lie[100]={0};
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]
			&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
			{
				num++;
				hang[num]=i-1;
				lie[num]=j-1;
			}
		}
	}

	for(int i=1;i<num;i++)
	{
		for(int j=1;j<=num-i;j++)
		{
			if(hang[j]>hang[j+1])
			{
				int t1=hang[j];
				hang[j]=hang[j+1];
				hang[j+1]=t1;
				int t2=lie[j];
				lie[j]=lie[j+1];
				lie[j+1]=t2;
			}
		}
	}

	for(int i=1;i<=num;i++)
		cout<<hang[i]<<" "<<lie[i]<<endl;
	return 0;
}