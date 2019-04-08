int a[9][9] = {0};                              //???????

void exp(int n)
{
	int i = 0, j = 0, k = 0, b[9][9] = {0}, c[9][9] = {0};
	
	for(i = 0; i < 9; i ++)
		for(j = 0; j < 9; j ++)
			if(a[i][j] != 0)
				b[i][j] = 1;                    //??????
	

	for(i = 0; i < 9; i ++)
	{
		for(j = 0; j < 9; j ++)
		{
			if((a[i][j] != 0) && (b[i][j] == 1))
			{
				if((i - 1 >= 0) && (j - 1 >= 0))
					c[i - 1][j - 1] = c[i - 1][j - 1] + a[i][j];
				if((i - 1 >= 0) && (j + 1 >= 0))
					c[i - 1][j + 1] = c[i - 1][j + 1] + a[i][j];
				if((i + 1 <= 8) && (j - 1 >= 0))
					c[i + 1][j - 1] = c[i + 1][j - 1] + a[i][j];
				if((i + 1 <= 8) && (j + 1 <= 8))
					c[i + 1][j + 1] = c[i + 1][j + 1] + a[i][j];
				if(i - 1 >= 0)
					c[i - 1][j] = c[i - 1][j] + a[i][j];
				if(i + 1 <= 8)
					c[i + 1][j] = c[i + 1][j] + a[i][j];
				if(j - 1 >= 0)
					c[i][j - 1] = c[i][j - 1] + a[i][j];
				if(j + 1 <= 8)
					c[i][j + 1] = c[i][j + 1] + a[i][j];
				c[i][j] = c[i][j] + a[i][j] * 2;
			}
		}
	}
	for(i = 0; i < 9; i ++)
	{
		for(j = 0; j < 9; j ++)
		{
			a[i][j] = c[i][j];
		}
	}

	if(n > 1)
		exp(n -1);
}
 
int main ()
{
	int m = 0, n = 0, i = 0, j = 0;             //m????????n???
	cin >> m >> n;
	a[4][4] = m;                                //?????
	exp(n);                                     //??????
	for(i = 0; i < 9; i ++)
	{
		cout << a[i][0];
		for(j = 1; j < 9; j ++)
			cout << ' ' << a[i][j];
		cout << endl;
	}
	return 0;
}