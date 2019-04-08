//**************************
//**??                  **
//**??:??? 1100012914**
//**??:2011.11.6        **
int main()
{
	int a,b,c,d,e,r[6];
	for (a = 1;a <= 5;a++)
	{
		for (b = 1;b <= 5;b++)
		{
			if (a == b)continue;
			for (c = 1;c <= 5; c++)
			{
				if (b == c || a == c)continue;
				for (d = 1;d <=5; d++)
				{
					if (c == d || d == b || d == a)continue;
					for (e = 1;e <=5;e++)
					{
						if(d == e || e == a || e == b || e == c)continue;
						r[a] = (e == 1);
						r[b] = (b == 2);
						r[c] = (a == 5);
						r[d] = (c != 1);
						r[e] = (d == 1);
						if (r[1] + r[2] == 2 && r[3] + r[4] + r[5] == 0)
						{
							if (e != 2 && e != 3 )
							{
								cout << a << " " << b << " " << c << " " << d << " " << e;
								break;
							}
						}
					}
				}
			}
		}
	}


	return 0;
}