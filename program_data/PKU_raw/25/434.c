int main()
{
	int n, i, j, temp[100] = {0}, tag[100] = {0};
	cin >> n;
	temp[0] = 1;
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < 99; j ++)
		{
			if (temp[j] * 2 + tag[j] < 10)
			{
				temp[j] = temp[j] * 2 + tag[j];
				tag[j] = 0;
			}
			else
			{
				temp[j] = temp[j] * 2 + tag[j] - 10;
				tag[j] = 0;
				tag[j + 1] = 1;
			}
		}
	}
	for (i = 99; i >= 0; i --)
	{
		if (temp[i] != 0)
			break;
	}
	for (j = i; j >= 0; j --)
		cout << temp[j];
	cout << endl;
	return 0;
}
