int main()
{
	int a[100][100] = {0};
	int i, m, temp = 0, j;
	cin >> m;
	if(m == 0)
	{
		cout << 1;
		return 0;
	}
	a[0][99] = 2;
	for(i = 1 ; i < 100 ; i ++)
	{
		temp = 0;
		for(j = 99 ; j >= 0 ; j --)
		{
			temp = a[i - 1][j] + a[i - 1][j] + a[i][j];
			if(temp > 9)
				a[i][j - 1] ++;
			a[i][j] = temp % 10;
		}
	}
	int flag = 0;
	for(i = 0 ; i < 100 ; i ++)
	{
		if(flag == 1) 
			cout << a[m - 1][i];
		if(a[m - 1][i] != 0 && !flag)
		{
			cout << a[m - 1][i];
			flag = 1;
		}
		
	}
	return 0;
}


		

		
