int main()
{
	int n, sum = 0, i = 1;
	cin >> n;
	while (i <= n)
	{
		int a = i%10, b = i - a;
		if (i%7 == 0) i++;
		else 
		{
			if (a == 7) i++;
		         else 
			{
				if (b == 70) i++;
		                  else sum = sum + i * i;
				         i++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}