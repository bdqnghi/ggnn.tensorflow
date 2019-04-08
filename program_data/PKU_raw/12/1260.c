int main()
{
	int a[16], i, j, k, count = 0;
	while(1)
	{
		cin >> a[0];
		if (a[0] == -1)
			break;
		for (i = 1; i <= 15; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
				break;
		}
		for (j = 0; j <= i - 2; j++)
		{
			for (k = j + 1; k <= i - 1; k++)
			{
				if (a[k] / a[j] == 2 && a[k] % a[j] == 0 || a[j] % a[k] == 0 && a[j] / a[k] == 2)
					count++;
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
		