int main()
{
	int z, q, s, l;
	for (z = 10; z <= 50; z += 10)
		for (q = 10; q <= 50; q += 10)
		{
			if (z == q) continue;
			for (s = 10; s <= 50; s += 10)
			{
				if (z == s || q == s) continue;
				for (l = 10; l <= 50; l += 10)
				{
					if (z == l || s == l || q == l) continue;
					if (z + q == s + l && z + l > s + q && z + s < q)
					{
						cout << "l " << l << endl;
						cout << "q " << q << endl;
						cout << "z " << z << endl;
						cout << "s " << s << endl;
					}
				}
			}
		}
	return 0;
}