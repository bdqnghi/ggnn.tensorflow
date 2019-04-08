//*********************
//  ????????
//  ???  1300062709
//  2013.12.09
//*********************
int shu[9][9] = {0};
int aa[9][9] = {0};
int x,y;
int n, m, i, j;
void grems(int x, int y)
{
	if ( x+1<9&&y+1<9&&x-1>=0&&y-1>=0)
	{
		shu[x+1][y+1] += aa[x][y];
		shu[x+1][y] += aa[x][y];
		shu[x+1][y-1] += aa[x][y];
		shu[x][y+1] += aa[x][y];
		shu[x][y-1] += aa[x][y];
		shu[x-1][y] += aa[x][y];
		shu[x-1][y+1] += aa[x][y];
		shu[x-1][y-1] += aa[x][y];
	}
	 shu[x][y] += 2 * aa[x][y];
}
int main()
{
	cin >> m >> n;
	aa[4][4]=m;
	while(n!=0)
	{
		for ( i = 0 ; i < 9 ; i++ )
		{
			for ( j = 0 ; j < 9; j++ )
			{
				if(aa[i][j]>0)
					grems(i,j);
			}
		}
		for ( i = 0 ; i < 9 ; i++ )
		{
			for ( j = 0 ; j < 9; j++ )
			{
				aa[i][j] = shu[i][j];
			}
		}
		if ( n > 0)
		{
			for ( i = 0 ; i < 9 ; i++ )
			{
				for ( j = 0 ; j < 9; j++ )
				{
					shu[i][j]=0;
				}
			}
		}
		n--;
	}
	for ( i = 0 ; i < 9 ; i++ )
	{
		for ( j = 0 ; j < 8 ; j++ )
			cout << aa[i][j] << ' ' ;
		cout << aa[i][8] << endl;
	}
	return 0;
}