int main()
{
int a[5][5];
	int max = 0, i, j, flag = 1, tag = 1;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++) 
			cin >> a[i][j];
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++)
			if (a[i][j] > a[i][max])
				max = j;
		for ( int k = 0; k < 5; k++) 
			if (a[i][max] > a[k][max])
				flag = 0;
		if (flag)
		{
			cout << i + 1 <<" " << max + 1 << " " << a[i][max];
			tag = 0;
		}
		max = 0;
		flag = 1;
	}
	if (tag)
		cout << "not found";
return 0;
}