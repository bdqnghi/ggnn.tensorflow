
int main()
{
	int a[100][100];
	int m,n;
	cin>>m>>n;
	for(int i=0;i!=m;i++)
	{
		for(int j=0;j!=n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i!=n;i++)
	{
		for(int j=0;;j++)
		{
			if(j==m||i-j<0)
				break;
			cout<<a[j][i-j]<<endl;
		}
	}
	for(int i=1;i!=m;i++)
	{
		for(int j=0;;j++)
		{
			if(i+j==m||n-1-j<0)
				break;
            cout<<a[i+j][n-1-j]<<endl;
		}
	}
	return 0;
}