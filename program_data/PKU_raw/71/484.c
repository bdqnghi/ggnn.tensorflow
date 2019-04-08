int main()
{
    int n, i, a, b, c;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		if ((b == 7 && c == 4) || (b == 4 && c == 7) || (b == 9 && c == 12) || (b == 12 && c == 9) || (b == 11 && c == 3) || (b == 3 && c == 11))
		   	cout << "YES" << endl;
		else
		{
		    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 ==0))
			{
			    if ((b == 1 && c == 4) || (c == 1 && b == 4) || (b == 1 && c == 7) || (b == 7 && c == 1) || (b == 2 && c == 8) || (b == 8 && c == 2))
				    cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
			else
			{
				if ((b == 1 && c == 10) || (c == 1 && b == 10) || (b == 2 && c == 3) || (c == 2 && b == 3) || (b == 2 && c == 11) || (c == 2 && b == 11))
                    cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
		}
	}
    return 0;
}