int main()
{
	int a[6][6], i, j, m, n, max;
	for (i = 1;i <= 5; i++)
		for(j = 1; j <= 5;j++)
			cin >> a[i][j];
	for (i = 1;i <= 5;i++)
	{
			max = 0;
			for (j = 1; j <=5;j++)
				if (a[i][j] > max)  
				{
					max = a[i][j];
					m = i;
					n = j;
				}
			for (j = 1;j <= 5; j++)
					if(a[j][n] < max)  break;
			if (j == 6)   
				{
					cout << m << " " << n << " " << a[m][n] << endl;
					break;
				}
	}
		if ( i == 6) cout << "not found" << endl;
		return 0;
}