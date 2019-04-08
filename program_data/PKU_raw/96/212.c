int main()
{
	char a[101];
	int i, l, num[101], temp[101], t;
	while (cin.getline(a,101))
	{
		l = strlen(a);
		for (i = 0; i < l; i++)
			num[i] = a[i] - '0';
		temp[0] = 0;
		if (l == 2 && 10 * num[0] + num[1] < 13)
		{
			cout << 0 << endl << 10 * num[0] + num[1] << endl;
			return 1;
		}
		if (l == 1)
		{
			cout << 0 << endl << num[0] << endl;
			return 1;
		}
		for (i = 1; i < l; i++)
		{
			num[i] += 10 * num[i - 1];
			temp[i] = num[i] / 13;
			num[i] %= 13;
		}
		t = num[i - 1];
		for (i = 0; i < l; i++)
			if (temp[i] != 0)
				break;
		for (; i < l; i++)
			cout << temp[i];
		cout << endl << t << endl;
	}
	return 0;
}