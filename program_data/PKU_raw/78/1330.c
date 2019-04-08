int main()
{
	char a[4] = {'z', 'q', 's', 'l'}, d;
	int b[4] = {0}, c[4] = {0}, i, j, p, e, x;
	for (b[0] = 1; b[0] <= 5; b[0]++) 
		for (b[1] = 1; b[1] <= 5; b[1]++) 
			for (b[2] = 1; b[2] <= 5; b[2]++) 
				for (b[3] = 1; b[3] <= 5; b[3]++) 
				{
					p = 0;
					for (i = 0; i < 3; i++)
						for(j = i + 1; j < 4; j++)
							if (b[i] == b[j])
							{
								p = 1;
								break;
							}
					
					if (p == 1)
						continue;
					if (((b[0] + b[1]) == (b[2] + b[3])) && ((b[0] + b[3]) > (b[2] + b[1])) && ((b[0] + b[2]) < b[1]))
					{
						for(i = 0; i < 4; i++)
							c[i] = b[i];
						break;
					}
				}
	for (i = 0; i < 3; i++)
	{
		x = i;
		for (j = i + 1; j < 4; j++)
			if (c[x] < c[j])
			{
				e = c[x];
				c[x] = c[j];
				c[j] = e;
				d = a[x];
				a[x] = a[j];
				a[j] = d;
			}
	}
	for (i = 0; i < 4; i++)
		cout << a[i] << ' ' << c[i] * 10 << endl;
	return 0;
}
