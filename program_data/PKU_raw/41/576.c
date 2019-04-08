int main()
{
	int A, B, C, D, E;
	for(A = 1; A <= 5; A++)
		for(B = 1; B <= 5; B++)
			if(A != B)
				for(C = 1; C <= 5; C++)
					if(A != C && B != C)
						for(D = 1; D <= 5; D++)
							if(A != D && B != D && C != D)
							{
								E = 15 - A - B - C - D;
								if((E == 1) == (A == 2 || A == 1))
									if((B == 2) == (B == 2 || B == 1))
										if((A == 5) == (C == 2 || C == 1))
											if((C != 1) == (D == 2 || D == 1))
												if((D == 1) == (E == 2 || E == 1))
												    if(E != 2 && E != 3)
												    {
													    cout << A << ' ' << B << ' ' << C << ' ' << D << ' ' << E;

												    }
							}
	return 0;
}
