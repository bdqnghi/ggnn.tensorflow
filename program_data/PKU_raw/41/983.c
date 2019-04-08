int main()
{
	int a, b, c, d, e, i1, i2, i3, i4, i5, s[6];
	for(i1 = 1; i1 <= 5; i1++)
	{
		a = i1;
		for(i2 = 1; i2 <= 5; i2++)
		{
			b = i2;
			for(i3 = 1; i3 <= 5; i3++)
			{
				c = i3;
				for(i4 = 1; i4 <= 5; i4++)
				{
					d = i4;
					for(i5 = 1; i5 <= 5; i5++)
					{
						e = i5;
						if(a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e && e != 2 && e != 3)
						{
							s[a] = bool(e == 1); s[b] = bool(b == 2); s[c] = bool(a == 5); s[d] = bool(c != 1); s[e] = bool(d == 1);
							if((s[1] == 1) && (s[2] == 1) && (s[3] + s[4] + s[5] == 0))
							{cout << a << " " << b << " " << c << " " << d << " " << e;}
						}
					}
				}
			}
		}
	}
	return 0;
}
