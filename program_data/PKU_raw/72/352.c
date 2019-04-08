int main()
{
	int m,n,h[21][21]={0},t[21][21]={0};
	cin >> m >> n;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> h[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if( (h[i][j] >= h[i-1][j]) && (h[i][j] >= h[i+1][j]) && (h[i][j] >= h[i][j-1]) && (h[i][j] >= h[i][j+1]) )
			{
				t[i][j]=1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if( t[i][j]==1)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}