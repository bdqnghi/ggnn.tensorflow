int main()
{
	int a, b, c, d;
	for (a = 1; a <= 5; a ++)
	{
		for (b = 1; b <= 5; b ++)
		{
			if (b == a)
				continue;
			for (c = 1; c <= 5; c ++)
			{
				if (c == a || c == b)
					continue;
				for (d = 1; d <= 5; d ++)
				{
					if (a + b == c + d && a + d > b + c && a + c < b)
					{
						if (b > d && b > c && c > a)
						{
							cout<<'q'<<" "<<10 * b<<endl;
							cout<<'l'<<" "<<10 * d<<endl;
							cout<<'s'<<" "<<10 * c<<endl;
							cout<<'z'<<" "<<10 * a<<endl;
						}
						if (d > b && b > a && a > c)
						{
							cout<<'l'<<" "<<10 * d<<endl;
							cout<<'q'<<" "<<10 * b<<endl;
							cout<<'z'<<" "<<10 * a<<endl;
							cout<<'s'<<" "<<10 * c<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
							
