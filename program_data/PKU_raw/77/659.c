int main()
{
	char a[100];
	int i, j, m;
	cin.getline(a,100);
	m = strlen(a);
	for ( i = 1; i < m; i++)
	{
		if (a[i] == a[m - 1])
		{
			for (j = i - 1; ; j--)
			{
				if (a[j] == a[0])
				{
					cout << j << " " << i << endl;
					a[i] = 's';
					a[j] = 's';
					break;
				}
			}
		}
	}
	return 0;
}