//********************************
//*??  ???????      *****
//*????? 1300012753     ***** 
//*???2013.11.19          *****   
//********************************
void cal(int a[][9][9], int step)
{
	for(int i = 4 - step; i <= 4 + step; i++)
	{
		for(int j = 4 - step; j <= 4 + step; j++)
		{
			a[step+1][i-1][j-1] += a[step][i][j];
			a[step+1][i-1][j] += a[step][i][j];
			a[step+1][i-1][j+1] += a[step][i][j];
			a[step+1][i][j-1] += a[step][i][j];
			a[step+1][i][j+1] += a[step][i][j];
			a[step+1][i+1][j-1] += a[step][i][j];
			a[step+1][i+1][j] += a[step][i][j];
			a[step+1][i+1][j+1] += a[step][i][j];
			a[step+1][i][j] += 2 * a[step][i][j];
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	int a[5][9][9];
	memset(a,0,sizeof(a));
	a[0][4][4] = 1;
	for(int i = 0; i < n; i++)
	cal(a,i);
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(j == 0)
			cout << a[n][i][j] * m;
			else
			cout << ' ' << a[n][i][j] * m;
		}
		cout << endl;
	}
	return 0;	
}