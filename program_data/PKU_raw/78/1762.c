int main()
{
	int z, q, s, l;
	for (z = 10; z <= 50; z = z + 10)
	{
		for (q = 10; q <= 50; q = q + 10)
		{
			for (s = 10; s <= 50; s = s + 10)
			{
				for (l = 10; l <= 50; l = l + 10)
				{ 
					if (z != q && z != s && z != l && q != s && q != l && s != l)
					{
						if ((z + q) == (s + l) && (z + l) > (q + s) && q > (z + s))
						{
							if (z > q && z > s && z > l)
							{
								cout << "z" << " " << z << endl;
									if (q > s && q > l)
									{
										cout << "q" << " " << q << endl;
										if (s > l)
										{
										    cout << "s" << " " << s << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "s" << " " << s << endl;
										}
									}
									if (s > q && s > l)
									{
										cout << "s" << " " << s << endl;
										if (q > l)
										{
										    cout << "q" << " " << q << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "q" << " " << q << endl;
										}
									}
									if (l > q && l > s)
									{
										cout << "l" << " " << l << endl;
										if (q > s)
										{
										    cout << "q" << " " << q << endl;
											cout << "s" << " " << s << endl;
										}
										else
										{
											cout << "s" << " " << s << endl;
											cout << "q" << " " << q << endl;
										}
									}
							}
							if (q > z && q > s && q > l)
							{
								cout << "q" << " " << q << endl;
									if (z > s && z > l)
									{
										cout << "z" << " " << z << endl;
										if (s > l)
										{
										    cout << "s" << " " << s << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "s" << " " << s << endl;
										}
									}
									if (s > z && s > l)
									{
										cout << "s" << " " << s << endl;
										if (z > l)
										{
										    cout << "z" << " " << z << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "z" << " " << z << endl;
										}
									}
									if (l > z && l > s)
									{
										cout << "l" << " " << l << endl;
										if (z > s)
										{
										    cout << "z" << " " << z << endl;
											cout << "s" << " " << s << endl;
										}
										else
										{
											cout << "s" << " " << s << endl;
											cout << "z" << " " << z << endl;
										}
									}
							}
							if (s > z && s > q && s > l)
							{
								cout << "s" << " " << s << endl;
									if (z > q && z > l)
									{
										cout << "z" << " " << z << endl;
										if (q > l)
										{
										    cout << "q" << " " << q << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "q" << " " << q << endl;
										}
									}
									if (q > z && q > l)
									{
										cout << "q" << " " << q << endl;
										if (z > l)
										{
										    cout << "z" << " " << z << endl;
											cout << "l" << " " << l << endl;
										}
										else
										{
											cout << "l" << " " << l << endl;
											cout << "z" << " " << z << endl;
										}
									}
									if (l > z && l > q)
									{
										cout << "l" << " " << l << endl;
										if (z > q)
										{
										    cout << "z" << " " << z << endl;
											cout << "q" << " " << q << endl;
										}
										else
										{
											cout << "q" << " " << q << endl;
											cout << "z" << " " << z << endl;
										}
									}
							}
							if (l > z && l > q && l > s)
							{
								cout << "l" << " " << l << endl;
									if (z > q && z > s)
									{
										cout << "z" << " " << z << endl;
										if (q > s)
										{
										    cout << "q" << " " << q << endl;
											cout << "s" << " " << s << endl;
										}
										else
										{
											cout << "s" << " " << s << endl;
											cout << "q" << " " << q << endl;
										}
									}
									if (q > z && q > s)
									{
										cout << "q" << " " << q << endl;
										if (z > s)
										{
										    cout << "z" << " " << z << endl;
											cout << "s" << " " << s << endl;
										}
										else
										{
											cout << "s" << " " << s << endl;
											cout << "z" << " " << z << endl;
										}
									}
									if (s > z && s > q)
									{
										cout << "s" << " " << s << endl;
										if (z > q)
										{
										    cout << "z" << " " << z << endl;
											cout << "q" << " " << q << endl;
										}
										else
										{
											cout << "q" << " " << q << endl;
											cout << "z" << " " << z << endl;
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