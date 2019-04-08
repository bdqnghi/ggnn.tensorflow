int main()
{
	int num[100000] = {0};
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> num[i];
	int k;
	cin >> k;

	for(int i = 0 ; i < n ; i++)
	{
		while(num[i] == k)
		{
			for(int j = i ; j < n - 1 ; j++)
				num[j] = num[j+1];
			n--;					//???????????
			if(i >= n)
				break;
		}
	}
	cout << num[0];
	for(int i = 1 ; i < n; i++)
		cout << ' ' <<num[i];
	return 0;
}