int main ()
{
	int a[5], g = 0, i, j;
	char ch[5][5] = {" ", "z ", "q ","s ","l "};
	for (a[1] = 1; a[1] <= 5; a[1] ++)
	{
		for (a[2] = 1; a[2] <= 5; a[2] ++)
		{
			if(a[1] == a[2])
				continue;
			for (a[3] = 1; a[3] <= 5; a[3] ++)
			{
				if (a[3] == a[1] || a[3] == a[2])
					continue;
				for (a[4] = 1; a[4] <= 5; a[4] ++)
				{
					if(a[4] == a[1] || a[4] == a[2] || a[4] == a[3])
						continue;
					if (a[1] + a[2] == a[3] + a[4] && a[1] + a[4] > a[3] + a[2] && a[1] + a[3] < a[2])
					{
						for (i = 5; i > 0; i --)
						{
							for (j = 1; j < 5; j ++ )
							{
								if (a[j] == i)
								{
									cout << ch[j] << i << '0' << endl;
									break;
								}
							}
						}
						g = 1;
						break;
					}
				}
				if (g == 1)
					break;
			}
			if (g == 1)
				break;
		}
		if ( g == 1 )
			break;
	}
	return 0;
}
