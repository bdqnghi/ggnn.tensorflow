int main()
{
	int n, i;
	cin >> n;
	int num, count[100] = {0};
	cin >> num;
	count[num]++;
	cout << num;
	for(i = 2; i <= n; i++)
	{
		cin >> num;
		count[num]++;
		if(count[num] == 1)
			cout << " " << num;
	}
	return 0;
}