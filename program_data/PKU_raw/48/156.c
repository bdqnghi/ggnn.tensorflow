int a[9][9] = {0};
void change(int a[9][9],int k);
int main()
{
	int m,n,i,j;
	cin >> m >> n;
	a[4][4] = m;
	change(a,n);
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(j != 8)
				cout << a[i][j] << " ";
			else
				cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
void change(int a[9][9],int k)
{
	if(k == 0)
		return;
	int i,j,sign[9][9] = {0},b[9][9] = {0};
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if((a[i][j] != 0)&&(sign[i][j] == 0))
			{
				sign[i][j]++;
				b[i][j] = a[i][j];
			}
		}
	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(sign[i][j] == 1)
			{
				a[i][j] += 2 * b[i][j];
				a[i][j + 1] += b[i][j];
				a[i][j - 1] += b[i][j];
				a[i + 1][j] += b[i][j];
				a[i - 1][j] += b[i][j];
				a[i - 1][j - 1] += b[i][j];
				a[i - 1][j + 1] += b[i][j];
				a[i + 1][j - 1] += b[i][j];
				a[i + 1][j + 1] += b[i][j];
			}
		}
	}
	for(i = 0; i < 9; i++)
		for(j = 0; j < 9; j++)
		{
			a[i][j] = a[i][j] - b[i][j];
		}
	change(a,k - 1);
}