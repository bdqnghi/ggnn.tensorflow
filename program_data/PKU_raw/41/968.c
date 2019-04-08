//????
int main()
{
	int a, b, c, d, e, i, j, m, n, A, B, C, D, E, p = 0;
	for(i = 1; i <= 5; i++)
	{
		a = i;
		for (j = 1; j <= 5; j++)
		{
			b = j;
			if (b == a)
				continue;
			for (m = 1; m <= 5; m++)
			{
				c = m;
				if (c == a || c == b)
					continue;
				for (n = 1; n <= 5; n++)
				{
					d = n;
					if (d == a || d == c || d == b)
						continue;
					e = 15 - a - b - c -d;
					if (e == 2 || e == 3)
						continue;
				    A = (e == 1);
					B = (b == 2);
					C = (a == 5);
					D = (c != 1);
					E = (d == 1);
					if (A + B + C + D + E == 2)
					{
					if (A == 1 && a < 3)
						p++;
					if (B == 1 && b < 3)
						p++;
					if (C == 1 && c < 3)
						p++;
					if (D == 1 && d < 3)
						p++;
					if (E == 1 && e < 3)
						p++;
					if (p == 2)
						cout << a << " " << b << " " << c << " " << d << " " << e;
					else if (p != 2)
						p = 0;
					}
				}
			}
		}
	}
	return 0;
}