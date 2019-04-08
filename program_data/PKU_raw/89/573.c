int know[10000];
int main()
{
	memset(know, 0, sizeof(know));  //?????????????????????????n - 1??????????
	int n;
	cin >> n;
	int flag = 1;
	int i, j;
	for (;;)
	{
		cin >> i >> j;
		if (i == 0 && j == 0)
		{
			break;
		}
		else
		{
			know[i] = -1;
			know[j]++;
		}
	}
	for (int k = 0; k < n; k++)
	{
		if (know[k] == n - 1)
		{
			cout << k << endl;
			flag = 0;
			break;
		}
	}
	if (flag)
		cout << "NOT FOUND" << endl;
	return 0;
}

