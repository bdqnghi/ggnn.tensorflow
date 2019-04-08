int main()
{
	int num[200];
	int start;
	int i , j , k;
	int n;
	for(i = 0 ; i < 199 ; i++)
		num[i] = 0;
	num[199] = 1;
	cin >> n;
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 0 ; j < 200; j++)
		{
			num[j] = num[j] * 2;
			for(k = 1 ; k < 200; k++)
			{
				if(num[k] >= 10)
				{
					num[k] = num[k] - 10;
					num[k-1]++;
				}
			}
		}
	}
	for(i = 0 ; i < 200 ; i++)
	{
		if(num[i] != 0)
		{
			start = i;
			break;
		}
	}
	for(i = start ; i < 200 ; i++)
			cout << num[i];
	cout << endl;
	return 0;
}