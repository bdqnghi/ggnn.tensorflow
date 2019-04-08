int main()
{
	int n,k,i,j,l,count = 0;
	char a[100][100];
	int flag[100][100]= {0};
	cin >> n;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '@')
				count ++;
		}
	cin >> k;
	for (l = 1;l < k;l++)
	{
		for (i = 0;i < n;i++)
			for (j = 0;j < n;j++)
				flag[i][j] = 0;
		for (i = 0;i < n;i++)
		     for (j = 0;j < n;j++)
			 {
				 if (a[i][j] == '@' && flag[i][j] == 0)
				 {
					 if (j + 1 < n && a[i][j+1] == '.')
					 {
						 a[i][j+1] = '@';
						 flag[i][j+1] = 1;
						 count++;
					 }
					 if (i + 1 < n && a[i+1][j] == '.')
					 {
						 a[i+1][j] = '@';
						 flag[i+1][j] = 1;
						 count++;
					 }
					 if (j - 1 >= 0 && a[i][j-1] == '.')
					 {
						 a[i][j-1] = '@';
						 flag[i][j - 1] = 1;
						 count++;
					 }
					 if (i- 1 < n && a[i-1][j] == '.')
					 {	 
						 a[i-1][j] = '@';
						 flag[i-1][j] = 1;
					     count++;
					 }
				 }
			 }
	}
	cout << count;
	return 0;
}