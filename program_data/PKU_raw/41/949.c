
int main()
{
	for(int A = 1 ; A<=5 ; A++)
		for(int B = 1 ; B<=5 ; B++)
			for(int C= 1 ; C<=5 ; C++)
				for(int D= 1 ; D<=5 ; D++)
					for(int E= 1 ; E<=5 ; E++)
					{
						
						if(A != B && A != C && A != D && A != E && B != C && B != D && B != E && C != D && C != E && D != E)
						{
							int cc1,cc2,cc3,cc4,cc5,cc ;
							cc  = (E != 2 ) && ( E != 3 ) ;
							if(cc)
							{
								cc1 = (E == 1) ;
								cc2 = 1 ;
								cc3 = (A == 5) ;
								cc4 = (C != 1) ;
								cc5 = (D == 1) ;
								if(cc1 && cc2 && (cc3 == 0 && cc4 == 0 && cc5 == 0))
								{
									if( A == 1 && B == 2 )
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( A == 2 && B == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
								else if(cc1 && cc3 && (cc2 == 0 && cc4 == 0 && cc5 == 0))
								{
									if( A == 1 && C == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( A == 2 && C == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									
								}
								else if(cc1 && cc4 && (cc2 == 0 && cc3 == 0 && cc5 == 0))
									{
									if( A == 1 && D == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( A == 2 && D == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									
								}
								else if(cc1 && cc5 && (cc2 == 0 && cc3 == 0 && cc4 == 0))
								{
									if( A == 1 && E == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( A == 2 && E == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									
								}
								else if(cc2 && cc3 && (cc1 == 0 && cc4 == 0 && cc5 == 0))
								{
									if( B == 1 && C == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( B == 2 && C == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								
								}
								else if(cc2 && cc4 && (cc1 == 0 && cc3 == 0 && cc5 == 0))
								{
									if( B == 0 && D == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( B == 0 && D == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
								else if(cc2 && cc5 && (cc1 == 0 && cc3 == 0 && cc4 == 0))
								{
									if( B == 1 && E == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( B == 2 && E == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
								else if(cc3 && cc4 &&(cc1 == 0 && cc2 == 0 && cc5 == 0))
								{
									if( C == 1 && D == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( C == 2 && D == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
								else if(cc3 && cc5 && (cc1 == 0 && cc2 == 0 && cc4 == 0))
								{
									if( C == 1 && E == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( C == 2 && E == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
								else if(cc4 && cc5 && (cc1 == 0 && cc2 == 0 && cc3 == 0))
								{
									if( D == 1 && E == 2)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
									else if( D == 2 && E == 1)
									{
										cout << A << " " << B << " " << C << " " << D << " " << E << endl ;
									}
								}
							}
						}
					}
	return 0;
}