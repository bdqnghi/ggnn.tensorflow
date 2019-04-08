int xToTen(int x, char c[])
{
	int i, lenth, ten, num;
	lenth = strlen(c);
	for(i = 0, ten = 0; i < lenth; i++)
	{
		if(c[i] >= '0' && c[i] <= '9')
			num = c[i] - '0';
		if(c[i] >= 'A' && c[i] <= 'Z')
			num = c[i] - 'A' + 10;
		if(c[i] >= 'a' && c[i] <= 'z')
			num = c[i] - 'a' + 10;
		ten = ten * x + num;
	}
	return (ten);
}

void tenToYout(int ten, int y)
{
	int a[100];
	int i, lenth;
	for(lenth = 0; ten >= y; lenth++)
	{
		a[lenth] = ten % y;
		ten /= y;
	}
	a[lenth] = ten;
	for(i = lenth; i >= 0; i--)
	{
		if(a[i] < 10)
			cout << a[i];
		else
			cout << (char)(a[i] - 10 + 'A');
	}
	cout << endl;
}

int main()
{
	char c[100];
	int x, y;
	cin >> x >> c >> y;
	tenToYout (xToTen(x, c), y);
	return 0;
}
