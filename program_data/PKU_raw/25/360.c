


int main()
{
	int num[10000] = {0};
	int n = 0;
	cin >> n;
	num[0] = 1; num[1] = 1;
	for (; n > 0; n--)
	{
		for (int i = 1; i <= num[0]; i++) num[i] *= 2;
		for (int i = 1; i <= num[0]; i++) 
		{
			num[i+1] += num[i] / 10;
			num[i] = num[i] % 10;
		}
		if (num[num[0]+1] > 0) num[0] ++;
	}

	for (int i = num[0]; i > 0; i--) cout << num[i];
	return 0;
}