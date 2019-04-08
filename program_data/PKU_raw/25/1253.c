int main()
{
	int i, n, num[1005], flag = 0, p = 1, j, t;
	cin >> n;
	for(i = 0; i<= 1004; i++)
		num[i] = 10;
	if(n == 0)
		cout << "1" << endl;
	else
	{
		num[1000] = 1;
		for(i = 1; i <= n; i++)
		{
			t = p;
			for(j = 1000; j >= 1000 - p + 1; j--)
			{
				num[j] = num[j] * 2 + flag;
				flag = 0;
				if(num[j] >= 10)
				{
					num[j] = num[j] - 10;
					flag = 1;
					if(num[j - 1] == 10)
					{
						num[j - 1] = 1;
						flag = 0;
						t++;
					}
				}
			}
			p = t;
		}
		if(num[1000 - p + 1] == 0)
			num[1000 - p + 1] = 1;
		for(i = 1000 - p + 1; i <= 1000; i++)
			cout << num[i];
	}
	cin >>n;
	return 0;
}