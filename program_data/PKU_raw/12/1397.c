int main()
{
	int a[15],i;
	while(1)
	{
		int n=1,sum=0,j;
		cin >> a[0];
		if (a[0] == -1)
			break;
		while(cin >> a[n])
		{
			if (a[n] == 0)
				break;
			n++;
		}
		for (i=0; i < n-1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (a[i] == a[j] * 2 || a[j] == a[i] * 2)
					sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}