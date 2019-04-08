int main ()
{
	int n, i, cnt [505],len, j, k, num = 0, flag, max = 0;
	char a[506], b [508][6],c[6];
	char *p = a;
	cin >> n;
	cin >> a;
	len = strlen(a);
	for (i = 0; i<= 500; i++)
		cnt[i] = 0;
	for (i = 0;i <= len - n; i ++)
	{
		for (j = 0; j < n; j++)
			c[j] = *(p + i +j);
		c [n] = '\0';
		if (num == 0)
		{
			for (j = 0; j < n; j++)
			b[0][j] = c[j];
			b [0][n] = '\0';
			num ++;
		}
		else
		{
			flag = 1;
			for (j = 0; j <num; j ++)
			{
				if (strcmp (b[j], c)== 0)
					flag = 0;
			}
			if (flag == 1)
			{
				num ++;
				for (j = 0; j < n; j++)
					b[num - 1][j] = c[j];
				b[num - 1][n] = '\0';
			}
		}
	}
	for (i = 0; i < num ; i++)
	{
		for (j = 0;j <= len - n; j ++)
		{
			for (k = 0; k< n; k++)
				c [k] = *(p + j +k);
			c[n] = '\0';
			if (strcmp(b[i] ,c) == 0)
				cnt [i] ++;
		}
	}
	for (i = 0; i < num; i ++)
	{
		if (cnt [i] > max)
			max = cnt[i];
	}
	if (max > 1)
	{
		cout << max << endl;
		for (i = 0; i < num; i++)
		{
			if (cnt[i] == max)
				cout << b[i] << endl;
		}
	}
	else
		cout << "NO";
		return 0;
}
