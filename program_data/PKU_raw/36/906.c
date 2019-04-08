int main()
{
	int i, j, k, m, count = 0;
	char str[1000];
	cin.getline (str, 1000);
	m = strlen (str);
	for (k = 0; ; k++)
		if (str[k] == ' ')
			break;
	for (i = 0; i < k; i++)
	{
		for (j = k + 1; j <= m; j++)
		{
			if (str[i] == str[j])
			{
				str[j] = '0';
				count++;
				break;
			}
		}
		if (j == 2 * k + 1)
			break;
	}
	if ((i < k) || ((count < k) && (count <= m - k - 1)) || ((count <= k) && (count < m - k - 1)))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
