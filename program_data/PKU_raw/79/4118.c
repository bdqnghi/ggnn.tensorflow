int main()
{
	int n, m, houzi[301], k, i, number;
	while (cin >> n >> m && n != 0)
	{
		number = n;
		k = 0; i = 0;
		for (int j = 1; j <= n; j++)
		{
			houzi[j] = 0;
		}
		while(number > 0)
		{
			k++;         
			i++;
			while (houzi[i]==1)
			{
				i++;
			}
			if (i > n)
			{
				i = 0;
				k--;
				continue;
			}
			if ((k == m) && (houzi[i]==0))
			{
				houzi[i] = 1;  
				number--;
				k=0;
				if (number == 0)
				{
					cout << i << endl;
				}
			}
		}
	}
	return 0;
}
