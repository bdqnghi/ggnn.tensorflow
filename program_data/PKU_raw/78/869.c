int main ( )
{
	int z, q, s, l, i, j, k, p, x;
	for(i = 1;i <= 5;i++)
	{
		z = i;
		for(j = 1;j <= 5;j++)
		{
			if(j == i)
				continue;
			else
			{
				q = j;
				for(k = 1;k <= 5;k++)
				{
					if(k == i || k == j)
						continue;
					else
					{
						s = k;
						for(p = 1;p <= 5;p++)
						{
							if(p == i || p == j || p == k)
								continue;
							else
							{
								l = p;
								if(z+q == s+l && z+l>s+q && z+s<q)
								{
									for(x = 5;x >= 1;x--)
									{
										if(z == x)
											cout <<'z'<<' '<<10*x<<endl;
										if(q == x)
											cout <<'q'<<' '<<10*x<<endl;
										if(s == x)
											cout <<'s'<<' '<<10*x<<endl;
										if(l == x)
											cout <<'l'<<' '<<10*x<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}