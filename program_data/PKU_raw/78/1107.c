int main ()
{
	int z, q, s, l; 
	for (z = 10; z <= 50; z += 10)
	{
		for (q = 10; q <= 50; q += 10)
		{
			if (q == z)
				continue; 
			for (s = 10; s <= 50; s += 10)
			{
				if ((s == q) || (s == z))
					continue; 
				for (l = 10; l <= 50; l += 10)
				{
					if ((l == s) || (l == q) || (l == z))
						continue; 
					if ((z + q == s + l) && (z + l > s + q) && (z + s < q))
					{
						if (l > q)
						{
							cout << "l " << l << endl;
							cout << "q " << q << endl;
							cout << "z " << z << endl;
							cout << "s " << s << endl;
						}
						else
						{
							cout << "q " << q << endl;
							cout << "l " << l << endl;
							if (z > s)
							{
								cout << "z " << z << endl;
								cout << "s " << s << endl;
							}
							else
							{
								cout << "s " << s << endl;
								cout << "z " << z << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0; 
}