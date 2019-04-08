int main()
{
    int i, n, sum, sum1;

	sum = sum1 = 0;

	cin >> n;

	for ( i = 1; i <= n; i++)
	{
		if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
			
			sum = sum + i * i;
		
		else 
			
			sum = sum;

		sum1 = sum1 + i * i;
	}

		sum = sum1 - sum;

		cout << sum << endl;

		return 0;
}