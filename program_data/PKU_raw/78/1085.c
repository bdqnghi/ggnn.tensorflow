int main()
{
	int z, q, s, l;
	char a = 'z', b = 'q', c = 's', d = 'l';
	int temp;
	char chtemp;
	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			if (q == z)
				continue;
			for (s = 1; s <= 5; s++)
			{
				if (s == z || s == q)
					continue;
				for (l = 1; l <= 5; l++)
				{
					if (l == z && l == q && l == s)
						continue;
					if (z + q == s + l && z + l > s + q && z + s < q)
					{
						if (z > q)
						{
							temp = z;
							z = q;
							q = temp;
							chtemp = a;
							a = b;
							b = chtemp;
						}
						if (q > s)
						{
							temp = s;
							s = q;
							q = temp;
							chtemp = c;
							c = b;
							b = chtemp;
							if (z > q)
							{
								temp = z;
								z = q;
								q = temp;
								chtemp = a;
								a = b;
								b = chtemp;
							}
						}
						if (s > l)
						{
							temp = s;
							s = l;
							l = temp;
							chtemp = c;
							c = d;
							d = chtemp;
							if (q > s)
							{
								temp = s;
								s = q;
								q = temp;
								chtemp = c;
								c = b;
								b = chtemp;
								if (z > q)
								{
									temp = z;
									z = q;
									q = temp;
									chtemp = a;
									a = b;
									b = chtemp;
								}
							}
						}
											goto part1;
					}
				}
			}
		}
	}
	part1:
							cout << d << " " << l * 10 << endl
							 << c << " " << s * 10 << endl
							 << b << " " << q * 10 << endl
							 << a << " " << z * 10 << endl;
	return 0;
}