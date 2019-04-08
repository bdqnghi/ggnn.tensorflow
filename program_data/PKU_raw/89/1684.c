
int main()
{
	int c[10000], n, a, b, answer = 20000;
	memset(c, 0, 100);
	cin >> n;
	while (cin >> a >> b && (a + b!=0))
	{
		c[a] = 1;
	}
	for (int i = 0; i < n; i ++)
	{
		if(c[i] == 0)
		{
			answer = i;
		}
	}
	if (answer != 20000)
	{
		cout << answer << endl;
	}
	else
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}

