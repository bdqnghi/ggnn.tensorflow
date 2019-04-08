
int main()
{
	int n;
	cin >> n;
	int num = 1, sum = 0;
	int a, b;
	while (num <= n)
	{
		if (num % 7 == 0)
			num += 1;
		else
		{
			a = num / 10;
			b = num - a * 10;
			if ((a == 7) || (b == 7))
				num += 1;
			else
				{
					sum = sum + num * num;
					num += 1;
				}
		}
	}
	cout << sum << endl;
	return 0;
}