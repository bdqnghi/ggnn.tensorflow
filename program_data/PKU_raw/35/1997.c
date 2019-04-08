


int main()
{
	int n,m;
	cin>>n;cin.get();cin>>m;
	int i,j;
	int a[9][9];
	int nmax[9]={0},mmin[9]={9999,9999,9999,9999,9999,9999,9999,9999,9999};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>nmax[i])
				nmax[i]=a[i][j];
			if(a[i][j]<mmin[j])
				mmin[j]=a[i][j];
		}
	}
	while(true)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(nmax[i]==mmin[j])
				{
					cout<<i<<'+'<<j<<endl;
					return 0;
				}
			}
		}
		cout<<"No"<<endl;
		return 0;
	}
}