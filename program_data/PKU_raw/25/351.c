int main()
{
	int a[1000], i, num, N;
	cin >> N;
	for(i = 0; i < 999; i++)
		a[i] = 0;
	a[999] = 1;
	for(; N > 0; N--)
	{
		for(i = 999, num = 0; i > 0; i--)
		{	
			num = a[i] * 2 + num/ 10;
			a[i] = num % 10;
		}
	}
	for(i = 0; a[i] == 0; i++);
	for(; i < 1000; i++)
		cout << a[i];
	cout << endl;
	return 0;
}
