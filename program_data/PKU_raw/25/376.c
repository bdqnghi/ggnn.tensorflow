


int main()
{
	int num, temp, up = 0, flag = 0;
	char m[100];
	for (int i = 1; i < 100;i++)
	{
		m[i] = '0';
	}
	m[0] = '1';
	cin >> num;
	for (int k = 0; k < num; k++)
	{
		for (int p = 0; p < 100;p++)
		{
			temp = (m[p] - '0') * 2;
			m[p] = temp % 10 + up + '0';
			up = temp /10 ;
		}
	}
	for (int r = 99; r >= 0; r--)
	{
		if ((m[r] == '0')&&(flag == 0))
			continue;
		cout << m[r];
		flag = 1;
	}
	return 0;
}