int main()
{
	int n, a, b, norm[100], num[100];
	cin >> n;
	for(int i =	1; i <= n; i++)
	{
		cin >> a >> b;
		num[i] = 0;
		if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
			norm[i] = 1;
		else
			norm[i] = 0;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			if(norm[j] == 1)
				num[i] = num[i] + 1;
			else
				break;
		}
	}
	for(int i = 2; i <= n - 1; i++)
		num[1] = num[1] >= num[i]? num[1]:num[i];
	cout << num[1] << endl;
	return 0;
}