/* title:???  *
 * author:???*
 * time:2011.9.28*/

   


int main()
{
	int z, q, s, l, i, j, t, k, m = 1;
	char n;
	int a[5];
	char b[5];
	for(z = 1; z <= 5; z++)
		for(q = 1; q <= 5; q++)
			for(s = 1; s <= 5; s++)
                for(l = 1; l <= 5; l++)
				{
					if(z + q == s + l && z + l > s + q && z + s < q)
					{
						a[1] = z;
						a[2] = q;
						a[3] = s;
						a[4] = l;
						b[1] = 'z';
						b[2] = 'q';
						b[3] = 's';
						b[4] = 'l';
					}
				}
				for(i = 1; i <= 4; i++)
				{
					for(j = 1; j <= 4 - i; j++)
					{
						if(a[j] < a[j + 1])
						{
						        t = a[j];
								a[j] = a[j + 1];
								a[j + 1] = t;
								n = b[j];
								b[j] = b[j + 1];
								b[j + 1] = n;
						}
					}
				}
				for(k = 1; k <= 4 ; k++)
				{
                    cout << b[k] << " " << a[k] * 10 << endl;
				}
	return 0;
}


