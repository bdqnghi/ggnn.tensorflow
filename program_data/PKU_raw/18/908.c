int n = 0, a[101][101] = {{0}}, sum = 0, k = 0;
int (*p)[101] = a;
void zerorow(int k)
{
	int min = 0;
	for (int i = 0; i < k; i ++)//every row
	{
		min = *(*(p+i));
		for (int j = 1; j < k; j ++)//find min
			if ( *(*(p+i)+j) < min)
				min = *(*(p+i)+j);
		if (min)
			for (int j = 0; j < k; j ++)//to zero
				*(*(p+i)+j) -= min;
	}
}
void zerocol(int k)
{
	int min = 0;
	for (int i = 0; i < k; i ++)//every col
	{
		min = *(*(p)+i);
		for (int j = 1; j < k; j ++)//find min
			if ( *(*(p+j)+i) < min)
				min = *(*(p+j)+i);
		if (min)
			for (int j = 0; j < k; j ++)//to zero
				*(*(p+j)+i) -= min;
	}
}
void jian(int k)
{
	for (int i = 2; i < k; i ++)//row move up
		for (int j = 0; j < k; j ++)
			*(*(p+i-1)+j) = *(*(p+i)+j);
	for (int j = 2; j < n; j ++)//col move left
		for (int i = 0; i < k - 1; i ++)
			*(*(p+i)+j-1) = *(*(p+i)+j);
}
int main()
{
	cin >> n;//cin
	while(cin >> *(*(p)))
	{
		sum = 0;
		for (int i = 0; i < n; i ++)
			for (int j = 0; j < n; j ++)
			{
				if (i + j)
					cin >> *(*(p+i)+j);
			}
		for (k = n; k > 1; k --)
		{
			zerorow(k);
			zerocol(k);
			sum += *(*(p+1)+1);
			jian(k);
		}
		cout << sum << endl;
	}
	return 0;
}