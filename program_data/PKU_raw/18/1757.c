int a[103][103];
int FindMin(int x, int y)
{
	int  ret = 100000;	
	for(int i = 0; i < y; i++)
		if(a[x][i] < ret)
			ret = a[x][i];
	return ret;
}
int FindMin1(int x, int y)
{
	int  ret = 100000;	
	for(int i = 0; i < y; i++)
		if(a[i][x] < ret)
			ret = a[i][x];
	return ret;
}
int main()
{
	int n, q;
	cin >> n;
	int sum = 0;
	q = n;
	for(int k = 0; k < n; k++)
	{
		sum = 0;
		q = n;
		for(int h = 0; h < n; h++)
			for(int l = 0; l < n; l++)	
				cin >> a[h][l];
		while(1)
		{
			if(q == 1)
			{
				cout << sum << endl;
				break;
			}
			// ?? 
			int t;
			for(int i = 0; i < q; i++)
			{
				t = FindMin(i,q);
				for(int j = 0; j < q; j++)
					a[i][j] -= t;
			}
			for(int j = 0; j < q; j++)
			{
				t = FindMin1(j,q);
				for(int i = 0; i < q; i++)
					a[i][j] -= t;
			}
			sum += a[1][1];
			//??
			for(int i = 1; i < q - 1; i++)
				for(int j = 0; j < q; j++)	
					a[i][j] = a[i+1][j];
			for(int j = 1; j < q - 1; j++)
				for(int i = 0; i < q; i++)
					a[i][j] = a[i][j+1];
			q --;
		}

	}
	return 0;	
}