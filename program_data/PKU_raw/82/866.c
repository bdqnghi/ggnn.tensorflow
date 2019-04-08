//????
int main()
{
	int n = 0, i = 0, x = 0, y = 0, sum = 0, max = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if ( x >= 90 && x <= 140 && y >= 60 && y <= 90)
		{
			sum++;
		}
		else
			sum = 0;
		if (sum > max)
			max = sum;
	}
	cout << max << endl;
	return 0;
}