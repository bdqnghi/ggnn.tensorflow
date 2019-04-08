int main()
{
	char c[505], d[505][6], e[505][6];
	memset(c, 0, sizeof(c));
	memset(d, 0, sizeof(d));
	int n, tmp = 0, max = 0, temp = 0;
	cin >> n;
	cin.get();
	cin.getline(c, 505);
	for (int i = 0; i <= strlen(c) - n; i++)
	{
		for (int j = 0; j < n; j++)
		     d[i][j] = c[i + j];
	}
	for (int i = 0; i <= strlen(c) - n; i++)
	{
		tmp = 1;
		if (d[i][0] != 0)
		{
			for (int j = i + 1; j <= strlen(c) - n; j++)
		    {
			    if (strcmp(d[i], d[j]) == 0)
			    {
				    tmp++;
				    memset (d[j], 0, 6);
			    }
		    }
		}
		else continue;
		if (tmp > max)
		{
			max = tmp;
			temp = 0;
			memset(e, 0, sizeof(e));
			strcpy (e[temp], d[i]);
		}
		if (tmp == max)
		{
			strcpy (e[temp], d[i]);
			temp++;
		}
	}
	if (max == 1) cout << "NO" << endl;
	else
	{
		cout << max << endl;
	    for (int i = 0; i < temp; i++)
	    {
		    cout << e[i] << endl;
	    }
	}
	return 0;
}