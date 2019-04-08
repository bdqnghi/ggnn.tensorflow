int main()
{
	char a[102], b[102];
	int len, i, left, leftNum[102];
	while(cin >> a)
	{
		left = 0;
		len = strlen(a);
		for (i = 0; i < 102; i++)
			b[i] = ' ';
		for (i = 0; i < len; i++)
		{
			if (a[i] == '(')
			{
				b[i] = '$';
				left++;
				leftNum[left] = i;
			}
			if (a[i] == ')')
				if (left > 0)
				{
					b[leftNum[left]] = ' ';
					left--;
				}
				else
					b[i] = '?';
		}
		b[len] = '\0';
		cout << a << endl << b << endl;
	}
	return 0;
}
// ????????????$????????????????????