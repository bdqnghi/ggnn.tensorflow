int main()
{
	int z, q, s, l, a[5], i;	//z, q, s, l ???????????????a[5] ??????????i ????
	for (z = 10; z <= 50; z = z + 10)
	{
		for (q = 10; q <= 50; q = q + 10)
		{
			if (q == z)
				continue;
			for (s = 10; s <= 50; s = s + 10)
			{
				if ((s == z) || (s == q))
					continue;
				for (l = 10; l <= 50; l = l + 10)
				{
					if ((l == z) || (l == q) || (l == s))
						continue;
					if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q))
					{
						for (i = 50; i >= 10; i = i - 10)
						{
							if (z == i)
								cout << "z " << z << endl;
							if (q == i)
								cout << "q " << q << endl;
							if (s == i)
								cout << "s " << s << endl;
							if (l == i)
								cout << "l " << l << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}