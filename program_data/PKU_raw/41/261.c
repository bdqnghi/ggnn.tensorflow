int main()
{
	int a,b,c,d,e,n;
	int a1,b1,c1,d1,e1;
	int fis,sec;
	for(a = 3; a <= 5; a++)
		for(b = 1; b <= 5; b++)
			for(c = 1; c <= 5; c++)
				for(d = 1; d <= 5; d++)
					for(e = 1; e <= 5; e++)
					{
						if(a != b && b != c && c != d && d != e && 	e != a
							&& a != c && a != d && a != e && b != d && b != e && c != e && e!=2&& e!=3)
						{
							n = 0;
							a1 = (e == 1);
							c1 = (a == 5);
							b1 = (b == 2);
							d1 = (c != 1);
							e1 = (d == 1);
							n = a1 + b1 + c1 + d1 + e1;
							if (b == 1) fis = b1;
							if (c == 1) fis = c1;
							if (d == 1) fis = d1;
							if (e == 1) fis = e1;
							if (b == 2) sec = b1;
							if (c == 2) sec = c1;
							if (d == 2) sec = d1;
							if (fis && sec && n == 2)
								cout << a << " " << b << " " << c << " " << d << " " << e << endl;
						}

					}
	return 0;

}
