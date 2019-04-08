//****************************
//**Title:?????        **
//**Author:?? 1300012732  **
//**Date?2013.10.30        **
//**File?4.cpp             **
//****************************
int main()
{
	int a[1000];
	int b[1000];
	char ch;
	int i;
	for (i = 0; ;i++)
	{
		cin >> a[i];
		ch = cin.get();
		if (ch == 10)
			break;
	}
	int max = 0;
	for (i = 0; ;i++)
	{
		cin >> b[i];
		if (b[i] > max)
			max = b[i];
		ch = cin.get();
		if (ch == 10)
			break;
	}
	cout << i + 1 << ' ';
	int j, k, htime = 0;
	for (j = 0; j <= max; j++)
	{
		int cnt = 0;
		for (k = 0; k <= i; k++)
		{
			if (a[k] <= j && b[k] > j)
				cnt++;
		}
		if (cnt > htime)
			htime = cnt;
	}
	cout << htime << endl;
	return 0;
}
