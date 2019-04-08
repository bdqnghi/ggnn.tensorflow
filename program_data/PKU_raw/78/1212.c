int main()
{
	int z, q, s, l, sum = 0;
	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			if (q != z)
			{
				for (s = 1; s <= 5; s++)
				{
					if (s != z && s != q)
					{
						l = z + q - s;
						if (l != z && l != q && l != s && l <= 5 && l > 0)
						{
							sum = (z + l > q + s) + (z + s < q);
							if (sum == 2)
							{
								if (q > l)
									{
										if ( s > l)
										{
											cout << "q" << " " << q * 10 << endl;
											cout << "s" << " " << s * 10 << endl;
											cout << "l" << " " << l * 10 << endl;
											cout << "z" << " " << z * 10 << endl;
										}
										else
										{
											cout << "q" << " " << q * 10 << endl;
											cout << "l" << " " << l * 10 << endl;
											cout << "s" << " " << s * 10 << endl;
											cout << "z" << " " << z * 10 << endl;
										}
									}
								else
								{
									cout << "l" << " " << l * 10 << endl;
									cout << "q" << " " << q * 10 << endl;
									cout << "z" << " " << z * 10 << endl;
									cout << "s" << " " << s * 10 << endl;
								}
								break;
							}
						}
					}
				}
			}
		}
	}
			
	return 0;
}
	
