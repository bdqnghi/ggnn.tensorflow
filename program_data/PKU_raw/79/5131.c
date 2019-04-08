int main()
{
	int m, n, i, j, count;
	while(1)
	{
		int flag[400] = {0};
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;
		count = 0;
		i = 1;
		j = 1;
		while(1)
		{
			if(flag[j] == 0)
			{
				if(i == m)
				{
					flag[j] = -1;
					i = 1;
					count++;
				}
				else
					i++;
			}
			if(count == n)
			{
				cout << j << endl;
				break;
			}
			if(j == n)
				j = 1;
			else
				j++;
		}
	}
	return 0;
}
