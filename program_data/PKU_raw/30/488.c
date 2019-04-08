//1000062701
int main()
{
	int i, n, sum=0;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		if (i%7==0||i%10==7
			||i/10==7)
			continue;
		sum = sum + i*i;
	}
	cout << sum <<endl;
	getchar ();
	getchar ();
	return 0;
}