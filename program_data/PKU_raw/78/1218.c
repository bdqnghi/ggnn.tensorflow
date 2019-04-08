int main()
{
	int a, b, c, d;
	for (a = 10; a <= 50; a += 10)
	{
		for (b = 10; b <= 50; b += 10)
		{
			if (a == b)
				continue;
			for (c = 10; c <= 50; c += 10)
			{
				d = a + b - c;
				if (d == a || d == b || d == c || d < 10 || d > 50 || a == c || b == c)
					continue;
				if (a + d > b + c && a + c < b)
					break;
			}
		    if (c != 60)
			break;
		}
		if (b != 60)
			break;
	}
	for (int i = 50; i >= 10; i -= 10)
	{
		if (a == i)
			cout << "z" <<' '<< a << endl;
		else
			if (b == i)
				cout << "q" <<' '<< b << endl;
			else
				if (c == i)
					cout << "s" <<' '<< c << endl;
				else
					if (d == i)
						cout << "l" <<' '<< d << endl;
	}
	return 0;
}