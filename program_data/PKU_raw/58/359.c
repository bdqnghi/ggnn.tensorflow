int main()
{
	int i, k, n;
	char a[81];
	cin >> n;
	cin.get();
	for (k = 1; k <= n; k++)
	{
		memset(a, 0, sizeof(a));
		cin.getline(a, sizeof(a));
		if((a[0] == '_') || (a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z'))
		{
			for (i = 1; a[i] != '\0';)
			{
				if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9') || a[i] == '_')
					i++;
				else
					break;
			}
				if (a[i] == '\0')
					cout << '1' << endl;
				else
					cout << '0' << endl;
		}
		else
			cout << '0' << endl;
	}
	return 0;
}