int main()
{
	char x[4000],y[4000];
	int xi[1000] = {0},yi[1000] = {0};
	int jl[1000] = {0};
	int i,j,l,js,s = 0,n = 1,max = 0;
	cin >> x >> y;
	l = strlen(x);js = 1;
	for (i = l-1;i >= 0; i--)
	{
		if (x[i] == ',')
		{
			n ++;
			js = 1;
		}
		else
		{
			xi[n] = xi[n] + (x[i] - '0') * js;
			js *= 10;
		}
	}
	cout << n << ' ';
	n = 1;
	l = strlen(y);js = 1;
	for (i = l-1;i >= 0; i--)
	{
		if (y[i] == ',')
		{
			n ++;
			js = 1;
		}
		else
		{
			yi[n] = yi[n] + (y[i] - '0') * js;
			js *= 10;
		}
	}
	for (i = 1;i <= n; i++)
		for (j = xi[i]; j < yi[i] ;j++)
		{
			jl[j] ++;
			if (jl[j] > max) 
				max = jl[j];
		}
	cout << max;
	cin >> i;
	return 0;
}








			
			
