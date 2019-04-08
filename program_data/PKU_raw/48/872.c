
int main() 
{
 	int a[10][10] = {0}, b[10][10] = {0}, n, m;
 	int t[8][2] = {0, 1, 0, -1, 1, -1, 1, 1, 1, 0, -1, -1, -1, 0, -1, 1};
	cin >> m >> n;
 	a[5][5] = m;
	while (n--)
	{
		memset(b, 0, sizeof(b));
		for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
		{
			
			if (a[i][j] != 0)
			{
				for (int k = 0; k <= 7; k++)
				{
					b[i+t[k][0]][j+t[k][1]] += a[i][j];
				}
				b[i][j] += a[i][j] * 2;
			}
		}
		for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
		{
			a[i][j] = b[i][j];
		}
	}
	for (int i = 1;i <= 9; i++)
	{
		cout << a[i][1];
		for (int j = 2; j<= 9; j++) cout << " " << a[i][j];
		cout << endl;
	}
 	return 0;
}
	 
