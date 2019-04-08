int main()
{
	int a, b, c, d, e, i, sum, x[100][6] = {0,0}, flag = 0;
	for(e = 4 ; e <= 5 ; e++)
		for(a = 3 ; a <= 5 ; a++)
			for(b = 2 ; b <= 5 ; b++)
				for(c = 1 ; c <= 5 ; c++)
					for(d = 1 ; d <= 5 ; d++)
					{
						if(a != b && a!= c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
						{
							i = 1;
							sum = (e == 1) + (b == 2) + (a == 5) + (c != 1) + (d == 1);
							if(sum == 2 && d!=1)
							{
								
									cout << a << " "  << b << " " << c << " " << d << " " << e << endl;
							}
						}
					}


					return 0;
}
