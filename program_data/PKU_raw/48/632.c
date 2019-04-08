//****************************************
//*??????????                     **
//*?????? 1100012920              **
//*???2011.11.28                    **
//****************************************
int num[11][11] = {0};
int f(int i, int j, int n);
int main()
{
	int m, n, k, i, j;
	cin >> m >> n;
	num[5][5] = m;
	{
		for(i = 1; i <= 9; i++)
		{
			for (j = 1; j < 9; j++)
			{
				k = f(i, j, n);
			    cout << k << " ";
			}
			cout << f(i, 9, n) << endl;
		}
	}
	return 0;
}
int f(int i, int j, int n)
{
	if(i == 0 || i == 10 || j == 0 || j == 10)
		return 0;

	else if ( n == 0)  
		return num[i][j];
	else
		return  f(i, j, n - 1) * 2
		      + f(i + 1, j, n - 1) + f(i - 1, j, n - 1)
		      + f(i, j + 1, n - 1) + f(i, j - 1, n - 1)
			  + f(i + 1, j + 1, n - 1) + f(i + 1, j - 1, n - 1)
			  + f(i - 1, j + 1, n - 1) + f(i - 1, j - 1, n - 1)
			  ;
}
