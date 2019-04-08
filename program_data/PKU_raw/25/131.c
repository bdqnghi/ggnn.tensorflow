void increase (char []);
int main()
{
	int N, sum = 0, i, j;
	char num[100];
	memset (num, '\0',100);
	num[0] = '1';
	cin >> N;
	for (i = 0; i < N; i++)
		increase (num);
	i = 0;
	while (num[i] != '\0') ++i;
	for (j = i - 1; j >= 0; j--)
	{
		cout << num[j];
	}
	return 0;
}
int mid = 0;
void increase (char num[100])
{
	int n = 0;
	while (num[n] != '\0' || mid != 0)
	{
		if (num[n] != '\0')
		mid += (num[n] - '0') * 2;
		if (mid < 10)
		{
			num[n] = mid + '0';
			mid = 0;
		}
		else 
		{
			num[n] = mid % 10 + '0';
			mid = 1;
		}
		++n;
	}
}