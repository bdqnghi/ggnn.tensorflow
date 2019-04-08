int main ()
{
	char sen[101];
	int g[100] = {0}, left[100] = {0};
	int m, n, i, k, sum;
	while (cin.getline(sen,101))
	{
		n = strlen(sen);
		k = 0;
		sum = 0;
		for (i = 0; i < n; i ++)
		{
			if (sen[i] == '(')
			{
				g[i] = 1;
				sum ++;
				left[k] = i;
				k ++;
			}
			else
			{
				if (sen[i] == ')')
				{
					if (sum > 0)
					{
						sum --;
						k --;
						g[left[k]] = 0;
						g[i] = 0;
					}
					else
					{
						g[i] = -1;
					}
				}
				else
					g[i] = 0;
			}
			
		}
		for (i = n -1; g[i] == 0; i --)
		{}
		n = i;
		for (i = 0; g[i] == 0; i ++)
		{}
		m = i;
		cout << sen << endl;
		for (i = m; i <= n; i ++)
		{
			if (g[i] == 1)
				cout << '$';
			else
			{
				if(g[i] == -1)
					cout << '?';
				else
					cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
