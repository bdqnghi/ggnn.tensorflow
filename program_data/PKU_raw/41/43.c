int main()
{
	int a, b, c, d, e, A, B, C, D, E;
	for (a = 1; a <= 5; a++)
	{
		if (a == 1 || a == 2)
			A = 1;
		else
			A = 0;
		for (b = 1; b <= 5; b++)
		{
			if (b == 1 || b == 2)
				B = 1;
			else
				B = 0;
			for (c = 1; c <= 5; c++)
			{
				if (c == 1 || c == 2)
					C = 1;
				else
					C = 0;
				for (d = 1; d <= 5; d++)
				{
					if (d == 1 || d == 2)
						D = 1;
					else
						D = 0;
					for (e = 1; e <= 5; e++)
					{
						if (e == 1 || e == 2)
							E = 1;
						else
							E = 0;
						if (e != 2 && e != 3)
						{
							if (a+b+c+d+e==15 && a*b*c*d*e==120 && A == (e == 1) && B == (b == 2) && C == (a == 5) && D == (c != 1) && E == (d == 1))
							{
								if (A+B+C+D+E == 2)
								{
									cout << a << " " << b << " " << c << " " << d << " " << e << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

