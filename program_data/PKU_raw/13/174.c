/*
??? 
1000012905  
*/
int main()
{
	int	n, i, j, k, g, p = 0;
	
	//?? 
	cin >> n;
	int 	a[n + 1];
	memset(a, 0, sizeof(a));
	for (i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	
	//??????? 
	for (j = 1; j <= n; j ++)
	{
		g = 0;
		
		//????????? 
		for (k = 1; k <= j-1; k ++)
		{
			if (a[j] == a[k])
			{
				g = 1;
			}
		}
		
		//????????????? 
		if (g == 0)
		{
			if (p != 0)
			{
				cout << " ";
			}
			cout << a[j];
			p ++;		//???????? 
		}
	}
	return 0;
}