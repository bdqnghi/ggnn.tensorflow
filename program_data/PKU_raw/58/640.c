int main()
{
	int n, i, j, mark[1000], k, l, m;
	char a[1000][81];
	cin >> n;
	for (m = 0; m < n; m++)
	{
		mark[m] = 1;
	}
	cin.ignore();
	for (i = 0; i < n; i++)
	{
		cin.getline(a[i], 81);
	}
	for (j = 0; j < n; j++)
	{
		if ((0 > a[j][0] - 'a'||a[j][0] - 'a' >25)
				&&(0 > a[j][0] - 'A'||a[j][0] - 'A' > 25)
				&&a[j][0] != '_')
		{ mark[j] = 0; continue; }
		for (k = 1; k < strlen(a[j]); k++)
		{
			if ((0 > a[j][k] - 'a'||a[j][k] - 'a' >25)
				&&(0 > a[j][k] - 'A'||a[j][k] - 'A' > 25)
				&&(0 > a[j][k] - '0'||a[j][k] - '0' > 9)&&
				a[j][k] != '_')
			{ mark[j] = 0; break; }
		}
	}
	for (l = 0; l < n; l++)
	{
		cout << mark[l] << endl;
	}
	return 0;
}

