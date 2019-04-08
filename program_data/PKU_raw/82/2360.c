int main()
{
	int a, b, c = 0, n, t = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
		{
			t = t + 1;
		}
		else
		{
			if (t > c)
				c = t;
			    t = 0;
		}
	}
	if(t > c)
		c = t;
	cout << c << endl;

	return 0;
}
