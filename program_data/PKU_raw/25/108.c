/*	???:2?N??
	???:1000012896 leo
	??:2010.12.17
	????:??2?N??
	*/
int main()
{
	int num[31]={0}, N, i, j, flag;
	num[30] = 1;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		flag = 0;
		for (j = 30; j >= 0; j--)
		{
			if (num[j] * 2 + flag >= 10)
			{
				num[j] = num[j] * 2 + flag - 10;
				flag = 1;
			}
			else
			{
				num[j] = num[j] * 2 + flag;
				flag = 0;
			}
		}
	}
	for (i = 0; i <= 30; i++)
		if (num[i] != 0)
			break;
	for (; i <= 30; i++)
		cout << num[i];
	return 0;
}

