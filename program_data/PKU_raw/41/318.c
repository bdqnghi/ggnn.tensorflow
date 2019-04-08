int main()
{
	int a,b,c,d,e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{		
			if (b== a)
				continue;
			for (c = 1; c <= 5; c++)
			{
				if (c == a || c == b)
					continue;
				for(d = 1; d <= 5; d++)
				{
					if (d == a || d == b || d == c)
						continue;
					e = 15 - a - b - c - d;
					if (e != 2 && e != 3 && 
						(
						((e == 1) && (a == 2)) + 
						(b == 2) + 
						((a == 5) && ((c == 1) || (c == 2)))+
						((c != 1) && (( d == 1) || (d == 2))) + 
						((d == 1) && ( e == 2)) == 2) &&
						((a != 1 && a != 2 && e != 1) + 
						(b != 1 && b != 2) +
						(c != 1 && c != 2 && a != 5) +
						(d != 1 && d != 2 && c == 1) +
						(e != 1 && e != 2 && d != 1) == 3))
						{
							cout << a << " " << b << " "
								<< c << " " << d << " "
								<< e << endl;
						}
				}
			}
		}
	}
	return 0;
}
