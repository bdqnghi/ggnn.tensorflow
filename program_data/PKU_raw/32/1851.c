int main()
{
	char a[105], b[105];
	int na[105], nb[105], n, i, j, k, lena, lenb;
	cin >>n;
	cin.get();
	for (i = 1; i <= n; i ++)
	{
		memset(na, 0, sizeof(na)); 
		memset(nb, 0, sizeof(nb));
		cin.getline (a, 104);
		cin.getline (b, 104);
		lena = strlen(a);
		lenb = strlen(b);
		for (j = 0; j <= lena - 1; j ++)
		{
			na [j] = a [lena -j - 1] - '0';
		}
		for (j = 0; j <= lenb - 1; j ++)
		{
			nb [j] = b [lenb - j - 1] - '0';
		}
		for (j = 0; j <= lena - 1; j ++)
		{
			na[j] = na [j] - nb [j];
			if (na [j] < 0)
			{
				na [j] = na [j] + 10;
				na [j + 1] = na [j + 1] - 1;
			}
		}
		j = 102;
		while (na[j] == 0)
			j --;
		for (; j >= 0; j--)
		{
			if (j != 0)
				cout << na[j];
			else
				cout << na[j] << endl;
		}
		cin.get();
	}
	return 0;
}