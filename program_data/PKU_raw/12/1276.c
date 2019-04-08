
int main()
{
	int a[16] = {0}, i, j, count;
	cin >> a[0];
	while (a[0] != -1)
	{
		count = 0;
		for (i = 1; ; i++ )
		{
			cin >> a[i];
			if (a[i] == 0)
			{
				break ;
			}
		}
		for (i = 0; a[i] != 0; i++ )
		{
			for (j = 0; a[j] != 0; j++ )
			{
				if (a[i] == 2 * a[j])
				{
					count ++ ;
				}
			}
		}
		cout << count << endl;
		cin >> a[0];
	}

	return 0;
}
