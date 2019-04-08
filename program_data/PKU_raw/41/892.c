int main()
{
	int a, b, c, d, e, f[10];
	for(int a = 1; a <= 5; a++)
	{
		for(int b = 1; b <= 5; b++)
		{
			for(int c = 1; c <= 5; c++)
			{
				for(int d = 1; d <= 5; d++)
				{
					for(int e = 1; e <= 5; e++)
					{
						f[a] = (e == 1);
						f[b] = (b == 2);
						f[c] = (a == 5);
						f[d] = (c != 1);
						f[e] = (d == 1);						
						if((e != 2)&&(e != 3)&&(f[1] == 1)&&(f[2] == 1)&&(f[3] == 0)&&(f[4] == 0)&&(f[5] == 0)
						&&(a != b)&&(a != c)&&(a != d)&&(a != e)&&(b != c)&&(b != d)&&(b != e)&&(c != d)&&(c != e)&&(d != e))
						{
							printf("%d %d %d %d %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
  return 0;
}