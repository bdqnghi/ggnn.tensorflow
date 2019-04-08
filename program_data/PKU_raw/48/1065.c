int m , n ;	
int i , j ;
int a[11][11] = {{0}}, b[11][11] = {{0}};
void fz(int);
int main ()
{
	cin >> m >> n ;
	a[5][5] = m ;
	fz(0);
	return 0 ;
}


void fz(int x )
{
	if ( x == n )
	{
		for (i = 1;i < 10;i ++)
		{
			cout << a[i][1];
			for (j = 2;j < 10; j++)
			{
				cout << " " << a[i][j];
			}
			cout << endl ;
		}
	}
	else
	{
		for (i = 4 - x ;i <= 6 + x;i ++)
		{
			for (j = 4 - x;j <= 6 + x;j ++)
			{
				b[i][j] = a[i+1][j+1]+a[i][j]+ a[i+1][j-1]+ a[i-1][j+1]+ a[i+1][j] + a[i-1][j] + a[i][j+1]+ a[i][j-1]+ a[i-1][j-1];
			}
		}
		for (i = 4 - x ;i <= 6 + x;i ++)
		{
			for (j = 4 - x;j <= 6 + x;j ++)
			{
				a[i][j] += b[i][j];
				b[i][j] = 0 ;
			}
		}
		fz(x+1);
	}
}