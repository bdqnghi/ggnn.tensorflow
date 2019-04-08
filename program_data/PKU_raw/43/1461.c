int main()
{
	int m, x, y, i, k, t; 
	k = t = 0;
	cin >> m;
	for (x = 3; x <= (m / 2); x += 2)
	{
		for (i = 3; i * i <= x; i += 2)
		{
			if ((x % i) == 0)
			{
				k = 1;
				break;
			}
		}
		
		if (k == 0)
		{
			y = m - x;
			for (i = 3; i * i <= y; i += 2)
			{
				if ((y % i) == 0)
				{
					t = 1;
					break;  
				}
			}
			if (t == 0)
				cout << x << ' ' << y << endl;
			else
				t = 0;
		}
		else
			k = 0;
	}
	return 0;
}