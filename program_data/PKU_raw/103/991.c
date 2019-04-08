int main()
{
	char ch[1000], a;
	int size, i = 0,  b, lonth;
	cin >> ch;
	a = ch[0];
	if (a >= 'a' && a <= 'z')
		a += ('A' - 'a');
	size = 0;
	lonth = strlen(ch);
	for (i = 0; i <= lonth; )
	{
		b = ch[i] - a;
		if (b == 0 || b == ('a' - 'A'))
		{
			size++;
			i++;
		}
		else
		{
			cout << "(" << a << "," << size << ")";
			a = ch[i];
			if (a >= 'a' && a <= 'z')
				a = 'A' + a - 'a';
			size = 0;
		}
	}
	return 0;
}

