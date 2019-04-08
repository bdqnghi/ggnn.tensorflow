int main()
{
	int n, a1[100], a2[100];
	int i, j, t, l, temp = 0;

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a1[i] >> a2[i];
	t = 0;
	l = 0;
	for(j = 0; j < n; j++)
	{
		if (a1[j] <= 140 && a1[j] >= 90 && a2[j] <= 90 && a2[j] >= 60)
		{
			t++;
			temp = t;
		}
		else 
		{
			if (t > l)
				l = t;
			t = 0;
		}
	}
	if (temp > l)
		l = temp;
	cout << l << endl;
	return 0;
}
