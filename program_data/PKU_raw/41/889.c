int main ()
{
	int a, b, c, d, e, A, B, C, D, E, cnt;
	for (a = 1; a <= 5; a ++)
	{
		for (b = 1; b <= 5; b ++)
		{
			for (c = 1; c <= 5; c ++)
			{
				for (d = 1; d <= 5;  d++)
				{
					for (e = 1; e <= 5; e ++)
					{
						A = (e == 1);
						B = (b == 2);
						C = ( a == 5);
						D = (c != 1);
						E = (d == 1);
						if (A + B + C + D+ E == 2 && e != 2 && e != 3)
						{
							cnt = 0;
							if (A == 1 && (a == 1 || a == 2))
							{
								cnt ++;
							}
							if (B == 1 && (b == 1 || b == 2))
							{
								cnt ++;
							}
							if (C == 1 && (c == 1 || c == 2))
							{
								cnt ++;
							}
							if (D == 1 && (d == 1 || d == 2))
							{
								cnt ++;
							}
							if (E == 1 && (e == 1 || e == 2))
							{
								cnt ++;
							}
							if (cnt == 2 && a * a + b * b + c * c + d *d + e * e == 55)
							{
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}