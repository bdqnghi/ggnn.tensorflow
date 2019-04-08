int main()
{
	char c;
	int i, flag = 0, cnt = 0, k;
	while (cin >> c)
	{
		cnt = cnt * 10 + (c - '0');
		k = cnt / 13;
		if (k == 0)
			{
				if (flag) cout << k;
				
			}
		else {cout << k; flag = 1;}
		cnt = cnt - k * 13;
	}
	if (!flag) cout << 0;
	cout << endl << cnt << endl;
	
	return 0;
}
