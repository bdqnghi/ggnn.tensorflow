int main ( )
{
	int n, i, j, k, len[100];
	char number[100][101], exp;
	cin >> n;
	cin.get();
	for (i = 0;i < 2*n;i++)
	{
		if (i == 2*n-1 || i % 2 == 0)
			cin.getline(number[i],101);
		else 
		{
			cin.getline(number[i],101);
			cin.get();                 /*????*/
		}
	}
	for (i = 0;i < 2*n;i++)
	{
		for (j = 0,k = strlen(number[i])-1;j < k;j++,k--)/*??????????*/
		{
			exp = number[i][j];
			number[i][j] = number[i][k];
			number[i][k] = exp;
		}
		len[i] = strlen(number[i]);
	}
	for (i = 0;i < 2*n;i = i + 2)
	{
		for (j = 0;j < len[i + 1];j++)
		{
			if (number[i][j] < number[i + 1][j])
			{
				number[i][j] = number[i][j] + ':' - number[i + 1][j];
				number[i][j + 1] --;
			}
			else number[i][j] = number[i][j] - number[i + 1][j] + '0';
		}
		if (number[i][len[i]-1] == 0)
			number[i][len[i]-1] = '\0';
		len[i] = strlen(number[i]);
	}
	for (i = 0;i < 2*n;i = i + 2)     /*??????*/
	{
		for (j = len[i]-1;j >= 0;j--)
		{
			if (j == 0)
				cout << number[i][j] <<endl;
			else cout << number[i][j];
		}
	}
	return 0;
}