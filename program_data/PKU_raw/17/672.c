
int main()
{
	int len, i, h;
	char c[102];
	int a[101];
	int b[101];
	while ((cin.getline(c, 101)))
	{
		len = strlen(c);
		cout << c << endl;
		h = 0;
		for (i = 0; i <= len; i++) a[i] = -1;
		memset(b, 0, sizeof(b));
		for (i = 0; i <= len - 1; i++)
		{
			switch (c[i])
			{
				case '(':
					{
						h++;
						a[h] = i;
						break;		
					}
				case ')':
					{
						if (h == 0)
						{
							b[i] = 2;	
						}
						else
						{
							a[h] = 0; 
							h--;
						}
						break;
					}
			}
		}
		for (i = 1; i <= h; i++)
		{
			if (a[i] != -1) b[a[i]] = 1;
		}
		for (i = 0; i <= len - 1; i++)
		{ 
			if (b[i] == 1) cout << '$';
			if (b[i] == 2) cout << '?';
			if (b[i] == 0) cout << ' ';
		}
		cout << endl;
	}
	
	return 0;
}