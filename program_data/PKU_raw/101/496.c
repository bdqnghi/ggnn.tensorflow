int main()
{
	int A, B, C, ra, rb, rc, m, n, l;
	char p, q, r;
	for ( ra = 0; ra <= 2; ra ++)
		for ( rb = 0; rb <= 2; rb ++)
			for ( rc = 0; rc <= 2; rc ++)
			{
				A =( rb > ra )+( rc == ra);     //??A???
				B =( ra > rb )+( ra > rc);      //??B???
				C =( rc > rb )+( rb == ra);     //??C???
				if ( A + B + C == 3)
				{
					if (( A > B )&&( A > C ))
					{
						if ( B > C)
						{
							cout <<"ABC"<< endl;
						}
						else
						{
							cout <<"ACB"<< endl;
						}
					}
					else if (( B > A )&&( B > C ))
					{
						if ( A > C )
						{
							cout <<"BAC"<< endl;
						}
						else 
						{
							cout <<"BCA"<< endl;
						}
					}
					else if (( C > A )&&( C > B ))
					{
						m =C;
						if ( A > B )
						{
							cout <<"CAB"<< endl;
						}
						else
						{
							cout <<"CBA"<< endl;
						}
					}
				}
			}
			
			return 0;
}


