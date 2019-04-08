//****************************************
//*???  ???????        **
//*????? 1100012996       **
//*???2011.11.23**
//****************************************
int main()
{
	int a[9][9] = {0}, b[9][9];
	int i , j , k , m , n , p , q ;
	cin >> m >> n;
	a[4][4] = m;
	for (k = 0; k < n; k++)
	{
		memset(b , 0 , sizeof(b));
		for (i = 1; i < 8; i++)
			for (j = 1; j < 8; j++)
			{
				b[i][j] += a[i][j];
				for ( p = -1; p <= 1 ; p++)
					for (q = -1; q <= 1; q++)
					{
						b[i + p][j + q] += a[i][j];
					}
			}
			memcpy(a , b ,sizeof(a));
	}
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
		{
			if (j == 0)
			{
				cout << a[i][j];
			}
			
			else
			{
				cout << " " << a[i][j];
			}
			if (j == 8)
			{
				cout << endl;
			}
		}
	return 0;
}
