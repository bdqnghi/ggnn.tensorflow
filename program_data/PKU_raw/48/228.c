int main()
{
	int i,j,k,m, n, count[9][9],temp[9][9];
	memset(count,0,sizeof(count));
	memset(temp,0,sizeof(count));
	cin >> m >> n;
	count[4][4] = m;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j <9; j++)
			for ( k = 0; k < 9;k++)
			{
				if ( count[j][k] != 0 )
				{
					temp[j-1][k] +=count[j][k];
					temp[j+1][k]+=count[j][k];
					temp[j-1][k-1]+=count[j][k];
					temp[j-1][k+1]+=count[j][k];
					temp[j][k-1]+=count[j][k];
					temp[j][k+1]+=count[j][k];
					temp[j+1][k+1]+=count[j][k];
					temp[j+1][k-1]+=count[j][k];
					temp[j][k] += count[j][k]*2;
				}
			}
		for ( j = 0; j <9; j++)
			for ( k = 0; k < 9;k++)
				count[j][k] = temp[j][k];
		memset(temp,0,sizeof(temp));
	}
	for ( j = 0; j <9; j++)
	{
		for ( k = 0; k < 8;k++)
			cout << count[j][k] <<' ';
		cout << count[j][8] << endl;
	}
	return 0;
}