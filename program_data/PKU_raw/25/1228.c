
int main(void)
{
	int num[1000]; // ????
	int n; // ??2?n??
	memset(num, 0, sizeof(num));
	num[0] = 1;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < 1000; j++)
		{
			num[j] *= 2; // ????2
		}
		for(int j = 0; j < 1000; j++) // ??
		{
			if(num[j] >= 10) 
			{
				num[j] -= 10;
				num[j + 1]++; // ?????
			}
		}
	}
	int x;
	for(x = 999; num[x] == 0; x--); // ??????
	for(; x >= 0; x--) // ????
	{
		cout << num[x];
	}
	cout << endl;
	return 0;
}
