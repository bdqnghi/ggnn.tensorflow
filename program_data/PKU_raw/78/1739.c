int main()
{
	int z, q, s, l;
	int w[4];
	char ch[4];
	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			if (q == z)
			{
				continue;
			}
			for (s = 1; s <= 5; s++)
			{
				if (s == z || s == q)
				{
					continue;
				}
				for (l = 1; l <= 5; l++)
				{
					if (l == z || l == q || l == s)
					{
						continue;
					}
					if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q))
					{
						w[(z > q) + (z > s) + (z > l)] = z * 10;
						w[(q > z) + (q > s) + (q > l)] = q * 10;
						w[(s > z) + (s > q) + (s > l)] = s * 10;
						w[(l > z) + (l > q) + (l > s)] = l * 10;
						ch[(z > q) + (z > s) + (z > l)] = 'z';
						ch[(q > z) + (q > s) + (q > l)] = 'q';
						ch[(s > z) + (s > q) + (s > l)] = 's';
						ch[(l > z) + (l > q) + (l > s)] = 'l';
						cout << ch[3] << " " << w[3] << endl;
						cout << ch[2] << " " << w[2] << endl;
						cout << ch[1] << " " << w[1] << endl;
						cout << ch[0] << " " << w[0] << endl;
					}
				}
			}
		}
	}
	return 0;
}