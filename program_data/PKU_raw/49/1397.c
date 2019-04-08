int main()
{
	int i, j, d, g, k, l;
	char a[501];
	cin >> a;
	d = strlen(a);
	for(i = 2; i <= d; i ++)
	{
		for(j = 0; j + i <= d; j ++)
		{
			g = 0;
			for(k = j, l = j + i - 1; k < l; k ++, l --)
			{
				if(a[k] != a[l])
				{
					g = 1;
					break;
				}
			}
			if(g == 0)
			{
				for(k = j; k <= j + i - 1; k ++)
				{
					cout << a[k];
				}
				cout << endl;
			}
		}
	}
	return 0;
}
