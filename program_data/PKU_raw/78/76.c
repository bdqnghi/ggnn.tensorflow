int main()
{
	int z, q, s, l, i, j, t;
	int a[4] = {0};
	for(z = 1; z < 6; z ++)
		for(q = 1; q < 6; q ++)
			for(s = 1; s < 6; s ++)
				for(l = 1; l < 6; l ++)
				{
					if(z + q == s + l && z + l > s + q &&  z + s < q)
					{
						a[0] = z; a[1] = q; a[2] = s; a[3] = l;
						for( i = 0; i < 3; i ++)
						{
							for(j = 0; j < 3- i; j ++)
							{
								if(a[j]  < a[j + 1])
								{
									t = a[j + 1]; a[j + 1] = a[j]; a [j]  = t;
								}
							}
						}
						for(i = 0; i < 4;i ++)
						{
							if(z == a[i]) cout << "z"<< " " << 10 * a[i] << endl;
							if(q == a[i] ) cout << "q"<< " " <<  10 * a[i] << endl;
							if(s == a[i] ) cout << "s"<< " " << 10 * a[i] << endl;
							if(l == a[i] ) cout << "l"<< " " << 10 * a[i] << endl;
						}
					}
				}
	return 0;
}



