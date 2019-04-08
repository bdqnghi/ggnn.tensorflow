int main()
{
	int m,n,i,j;
	int altitude[21][21]={0};
	cin >>m>>n;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			cin >>altitude[i][j];
		}
	}
	i=0;
	if ((altitude[0][0]>=altitude[0][1])&&(altitude[0][0]>=altitude[1][0]))
		cout <<"0 0"<<endl;
	for (j=1;j<n;j++)
	{
		if ((altitude[i][j]>=altitude[i][j-1])&&(altitude[i][j]>=altitude[i][j+1])&&(altitude[i][j]>=altitude[i+1][j]))
			cout <<i<<" "<<j<<endl;
	}
	for (i=1;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (j==0)
			{
				if ((altitude[i][j]>=altitude[i-1][j])&&(altitude[i][j]>=altitude[i][j+1])&&(altitude[i][j]>=altitude[i+1][j]))
					cout <<i<<" "<<j<<endl;
			}
			if (j>0)
			{
				if ((altitude[i][j]>=altitude[i-1][j])&&(altitude[i][j]>=altitude[i][j-1])&&(altitude[i][j]>=altitude[i][j+1])&&(altitude[i][j]>=altitude[i+1][j]))
					cout <<i<<" "<<j<<endl;
			}
		}
	}
	return 0;
}