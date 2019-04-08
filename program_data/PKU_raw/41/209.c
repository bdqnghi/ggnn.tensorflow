int main()
{
	int A, B, C, D, E, i, j, k , m, l, p;
	char ci[6], T[6];
	for(i = 1 ; i <= 5 ; i ++)
	{
		A = i;
		ci[i] = 'A';
		for(j = 1 ; j <= 5 ; j ++)
		{
			if(A != j)
			{
				B = j;
			    ci[j] = 'B';
			    for(k = 1 ; k <= 5 ; k ++)
			    {
					if(A != k && B != k)
					{
						C = k;
						ci[k] = 'C';
						for(m = 1 ; m <= 5 ; m ++)
						{	
							if(m != A && m != B && m != C)
							{
								D = m;
								ci[m] = 'D';
								for(l = 1 ; l <= 5 ; l ++)
								{
									if(l != A && l != B && l != C && l != D && l != 2 && l != 3)
									{
										E = l;
										ci[l] = 'E';
										T[1] = (E == 1);
										T[2] = (B == 2);
										T[3] = (A == 5);
										T[4] = (C != 1);
										T[5] = (D == 1);
										if(T[ci[1] - 'A' + 1] == 1 && T[ci[2] - 'A' + 1] == 1 && T[ci[3] - 'A' + 1] == 0 && T[ci[4] - 'A' + 1] == 0 && T[ci[5] - 'A' + 1] == 0)
											cout << A << ' ' << B << ' ' << C << ' ' << D <<  ' ' << E << endl;;
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
	



