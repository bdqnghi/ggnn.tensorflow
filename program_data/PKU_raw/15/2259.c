
int main()
{
	int n, mian[105][105];
	int i, j, i1, j1, i2, j2;
	cin >> n;
	for(i = 0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>mian[i][j];		
		}
	}
	for(i = 0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(mian[i][j] == 0 && mian[i+1][j]==0&& mian[i][j+1]==0)
			{
				i1 = i;
				j1 = j;
			}
			else if(mian[i][j] == 0 && mian[i-1][j]==0&& mian[i][j-1]==0)
			{
				i2 = i;
				j2 = j;
			}
		}
	}
	cout << (i2-i1-1)*(j2-j1-1);
	return 0;
}