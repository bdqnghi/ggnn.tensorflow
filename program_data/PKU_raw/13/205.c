int main()
{
	int n;
	cin >> n;
	int a, i, j, l, k = 1;
	cin >> a;
	int s[20000] = {a};
	for (i = 1; i < n; i ++)
	{
		cin >> a;
		j = 0;
		while (s[j] != a)
		{	j ++;
		    if (j == k)
			{	
				s[k] = a;
			    k ++;
			}
		}
	}
	for (l = 0; l < k - 1; l ++)
		cout << s[l] << ' ';
	cout << s[k - 1];
	return 0;
}