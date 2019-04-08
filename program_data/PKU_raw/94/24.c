int main()
{
	int n,x = 0;
	cin >> n;
	int a[501];
	int b[501];
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int j = 1,k = 0; j <= n; j++)
	{
		if(a[j] % 2 != 0)
		{
			k++;
			b[k] = a[j];
			x++;
		}
	}
	for(int m = 1; m <= x;m++)
         {
		for(int h = 1; h <= x - m; h++)
		{
			int temp;
		         if(b[h] > b[h + 1])
			{	
			    temp = b[h];
			    b[h] = b[h + 1];
			    b[h + 1] = temp;
			}
		}
	}
	int sign = 0;
	for(int h = 1;h <= x; h++)
	{
		if(sign == 0)
		{
			cout << b[h];
			sign++;
		}
		else
		    cout << "," << b[h];
	}
	return 0;
}