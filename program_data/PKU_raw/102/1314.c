int main()
{
	char s[50][20], man[5] = { "male" }, wman[7] = { "female" };
	double l[50];
	double temp;
	int n, i, j, tip;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> s[i] >> l[i];
	for (i = 0; i < n - 1; i++)
	for (j = i + 1; j < n; j++)
	{
		if (strcmp(s[i], man) == 0 && strcmp(s[j], man) == 0 && l[i] > l[j])
		{
			temp = l[i];
			l[i] = l[j];
			l[j] = temp;
		}

	}
	for (i = 0; i < n - 1; i++)
	for (j = i + 1; j < n; j++)
	{
		if (strcmp(s[i], wman) == 0 && strcmp(s[j], wman) == 0 && l[i] < l[j])
		{
			temp = l[i];
			l[i] = l[j];
			l[j] = temp;
		}

	}
	for (i = n - 1; i >= 0; i--)
	{
		if (strcmp(s[i], wman) == 0)
		{
			tip = i;
			break;
		}
	}
	cout <<fixed;
	for (i = 0; i < n; i++)
	{
		if (strcmp(s[i], man) == 0)
			cout << setprecision(2) << l[i] << " ";
	}
	for (i = 0; i < tip; i++)
	{
		if (strcmp(s[i], wman) == 0)
			cout << setprecision(2) << l[i] << " ";
	}
	cout << setprecision(2) << l[tip] << endl;
	return 0;
}
