
int main()
{
	int z, q, s, l, i, j, k, n, t;
	for (i = 1; i <= 5; i++)
	{
		z = i;
		for (j = 1; j <= 5; j++)
		{
			q = j;
			if (q != z)
			{
				for (k = 1 ; k <= 5; k++)
				{
					s = k;
					if (s != q && s != z)
					{
						for (n = 1; n <= 5; n++)
						{
							l = n;
							if (l != z && l != q && l != s)
							{
								if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q)
								{
									z = z * 10; q = q * 10;
									s = s * 10; l = l * 10;
									for (t = 50; t >= 0; t = t - 10)
									{
										if (z == t)
											cout << "z " << z <<endl;
										if (q == t)
											cout << "q " << q <<endl;
										if (s == t)
											cout << "s " << s <<endl;
										if (l == t)
											cout << "l " << l <<endl;
									}
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
		

									

