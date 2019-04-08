//********************
// 1.cpp
// ??  1200018415
// 2012 11 26
//********************

int putapples(int c, int d);

int main()
{
	int m, a, b, i;
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> a >> b;
		if (a == 0)
			cout << "1" << endl;
		else
			if(a == 1)
				cout << b << endl;
			else
				cout << putapples(a, b) << endl;
	}
	return 0;
}

int putapples(int c, int d)
{
	if (c == 1 || c == 0 || d == 1)
		return 1;
	if (c < 0)
		return 0;
	else
		return putapples(c - d, d) + putapples(c, d - 1);
}


