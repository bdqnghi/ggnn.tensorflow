
char a[270], b[270];

int MAX(int e1, int e2)
{
	if (e1 > e2) return e1;
	return e2;
}

int main()
{
	cin >> a >> b;
	

	char c[270];

	int len1 = strlen(a), len2 =strlen(b);
	int len = MAX(len1, len2);
	
	int ic = 0, ia, ib;
	int j1 = len1-1, j2 = len2-1, j3 = len -1;
	c[len] = 0;
	
	while (j1 >= 0 && j2 >= 0)
	{
		ia = a[j1] - '0';
		ib = b[j2] - '0';
		ic += ia + ib;
		c[j3] = ic % 10 + '0';
		ic /= 10;
		j1 --;
		j2 --;
		j3 --;
	}
	if (j2 > 0)
	{
		while (j2 >= 0)
		{
				ib = b[j2] - '0';
				ic += ib;
				c[j3] = ic % 10 + '0';
				ic /= 10;
				j2 --;
				j3 --;
		}
	}
	if (j1 > 0)
	{
		while (j1 >= 0 && ic > 0)
		{
				ia = a[j1] - '0';
				ic += ia;
				c[j3] = ic % 10 + '0';
				ic /= 10;
				j1 --;
				j3 --;
		}
	}
	if (ic > 0)
	{
		cout << ic << c;
	}
	else
	{
		int i;
		for ( i = 0;  i < strlen(c) - 1; i++)
		{
			if (c[i] == '0') continue;
			else break;
		}
		while (i < strlen(c))
		{
			cout << c[i];
			i++;
		}	
	}
	return 0;
	
}

