int main()
{
	int i, n, s;
	s = 0;
	cin >> n;
	for (i = 1; i <= n; i = i + 1)
	{
		if (i % 7 == 0)
		s = s;
	else if (i % 10 == 7)
			s = s;
		else if (7 <= (i / 10) && (i / 10)< 8)
		s = s;
    else 
		s = s + i * i;
	}
	cout << s << endl;
	return 0;
}

