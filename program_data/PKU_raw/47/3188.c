int main()
{
	int n;
	cin >> n;				//n?????
	int first [100] = {0};
	for (int i = 0;i <= n-1;i++)
	{
		cin >> first[i];
	}
	for (int i = 0;i <= n-1;i++)
	{
		if (i != n-1)
			cout << first[n-1-i] <<" ";
		else
			cout << first[n-1-i];
	}
	cin.get();
	cin.get();
	return 0;
}