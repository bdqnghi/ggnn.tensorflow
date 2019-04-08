
int main()
{
	char a[101] = {'0'}, r[101] = { '0' };
	cin.getline(a, 101);
	int x = strlen(a), i, b[101] = {0},temp=0;
	if (x == 1)
	{
		cout << '0' << endl << a[0] << endl;
		return 0;
	}
	for (i = 0; i < x ; i++)
	{
		b[i] = a[i] - '0';
	}
	for (i = 0; i < x; i++)
	{
		r[i] = b[i] / 13+'0';
		b[i + 1] += (b[i] % 13) * 10;
	}
	for (i = 0; i < x; i++)
	{
		if ((r[i] == '0') && (temp == 0))
			continue;
		if (r[i] != 0)
			temp = 1;
		cout << r[i];
	}
	if (temp == 1)
		cout << endl;
	else
		cout << '0' << endl;
	cout << b[x]/10 << endl;
	return 0;
}