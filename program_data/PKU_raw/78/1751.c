int main()
{
	int z, q, s, l;
	for (z = 10; z <= 50; z = z + 10) for (q = 10; q <= 50; q = q + 10)
	{
		if (q != z) for (s = 10; s <= 50; s = s + 10)
		{
			if ((s != z) && (s != q)) for (l = 10; l <= 50; l = l + 10)
			{
				if ((l != z) && (l != q) && (l != s))
				{
					if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q))
					{
						if (z == 50) cout << "z 50" << endl;
						if (q == 50) cout << "q 50" << endl;
						if (s == 50) cout << "s 50" << endl;
						if (l == 50) cout << "l 50" << endl;
						if (z == 40) cout << "z 40" << endl;
						if (q == 40) cout << "q 40" << endl;
						if (s == 40) cout << "s 40" << endl;
						if (l == 40) cout << "l 40" << endl;
						if (z == 30) cout << "z 30" << endl;
						if (q == 30) cout << "q 30" << endl;
						if (s == 30) cout << "s 30" << endl;
						if (l == 30) cout << "l 30" << endl;
						if (z == 20) cout << "z 20" << endl;
						if (q == 20) cout << "q 20" << endl;
						if (s == 20) cout << "s 20" << endl;
						if (l == 20) cout << "l 20" << endl;
						if (z == 10) cout << "z 10" << endl;
						if (q == 10) cout << "q 10" << endl;
						if (s == 10) cout << "s 10" << endl;
						if (l == 10) cout << "l 10" << endl;
					}
				}
			}
		}
	}
	return 0;
}