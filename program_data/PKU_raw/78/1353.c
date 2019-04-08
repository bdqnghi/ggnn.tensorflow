int main()
{
	int z, q, s, l, cc1, cc2, cc3, cc;
	void line (int, int, int, int);
	for (z = 1; z <=5; z++)
		for (q = 1; q <= 5; q++)
			for (s = 1; s <= 5; s++)
				for (l = 1; l <=5; l++)
				{
					cc1 = (z + q) == (s + l);
					cc2 = (z + l) > (s + q);
					cc3 = (z + s) < q;
					cc = cc1 + cc2 + cc3;
					if (cc == 3)
					{
						cout << 'l' << " " << l * 10 << endl;
						cout << 'q' << " " << q * 10 << endl;//????l??,???q
						if (z > s)
						{
							cout << 'z' << " " << z * 10 << endl;
							cout << 's' << " " << s * 10 << endl;
						}
						if (s > z)
						{
							cout << 's' << " " << s * 10 << endl;
							cout << 'z' << " " << z * 10 << endl;
						}
					}
				}
				
	return 0;
}