/*-----------------------------------------*\
|? ? ?   ??????????   	        |
|? ?      ????	                    |
|? ? ? ??2010 ? 12 ? 01 ?		    |
|? ?      ?1000012758		            |
\*-----------------------------------------*/ 
int a[100][100][100];//n?n*n???
int Sum(int n, int t[100][100])
{
	int sum = 0, min = 0;
	int i, j, tempi, tempj;
	//??
	for (i = 0; i < n; i++)
	{
		min = t[i][0];
		for (j = 0; j < n; j++)
			if(t[i][j] < min)
				min = t[i][j];//????
		for (j = 0; j < n; j++)
			t[i][j] -= min;//????????
	}
	//??
	for (j = 0; j < n; j++)
	{
		min = t[0][j];
		for (i = 0; i < n; i++)
			if(t[i][j] < min)
				min = t[i][j];//???
		for (i = 0; i < n; i++)
			t[i][j] -= min;//???????
	}
	sum = t[1][1];
	if (n == 2)//??2*2?????
		return sum;
	//????????????
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1; j++)
		{
			if (j == 0)
				tempj = j;
			else
				tempj = j + 1;
			if (i == 0)
				tempi = i;
			else
			{
				tempi = i + 1;
			}
			t[i][j] = t[tempi][tempj];
		}
		//???
	return sum += Sum(n - 1, t);
}
int main()
{
	int n, sum = 0;
	memset(a, 0, sizeof(a));
	cin >> n;
	for (int i = 0; i < n; i++)//??n???
	{
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				cin >> a[i][j][k];//??
		sum = Sum(n, a[i]);//??
		cout << sum << endl;//??
	}
	return 0;
}