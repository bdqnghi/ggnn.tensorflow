int main()
{
	int z, q, s, l;
	for(z = 1; z <= 5; z++)
	{
		for(q = 1; q <= 5; q++)
		{
			for(s = 1; s <= 5; s++)
			{
				for(l = 1; l <= 5; l++)
				{
					if(((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q) )
					{
						z *= 10;
						q *= 10;
						s *= 10;
						l *= 10;
						cout << 'l' << ' ' << l << endl << 'q' << ' ' << q << endl << 'z' << ' ' << z << endl << 's' << ' ' << s;
					}
				}
			}
		}
	}
	return 0;
}
 