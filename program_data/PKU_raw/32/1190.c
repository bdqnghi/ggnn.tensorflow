
int main()
{
	int n, len_a, len_b;
	char a[101], b[101];
	int num[101];
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin.get();
		cin.getline(a, 101);
		len_a = strlen(a);
		cin.getline(b, 101);
		len_b = strlen(b);
		memset(num, 0, sizeof(num));
		for(int i = len_a - 1; i >= 0; i--)
			num[len_a - i] = a[i] - '0';
		for(int i = len_b - 1; i >= 0; i--)
		{
			int j = len_b - i, b0 = b[i] - '0';
			if(num[j] >= b0)
				num[j] -= b0;
			else
			{
				num[j + 1]--;
				num[j] = num[j] + 10 - b0;
			}
		}
		int i = 100;
		while(num[i] == 0 && i != 1)
				i--;
		for(int j = i; j >= 1; j--)
			cout << num[j];
		cout << endl;
	}
	return 0;
}