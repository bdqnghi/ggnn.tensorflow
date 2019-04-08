int main()
{
	int A, B, C, D, E, a,b,c,d,e;
	for ( A = 1; A <= 5; A++ )
		for ( B = 1; B <= 5; B++ )
		{
			if ( B == A ) continue;
			for ( C = 1; C <= 5; C++ )
			{
				if ( C==B||C==A ) continue;
				for ( D = 1; D <= 5; D++ )
				{
					if ( D == A || D == B || D == C ) continue;
					for ( E = 1; E <= 5; E++ )
					{
						if ( E == A || E == B || E == C 
							|| E == D || E == 2 || E == 3 ) continue;
						a = (E == 1);
						b = (B == 2);
						c = (A == 5);
						d = (C > 1);
						e = (D == 1);
						if ( a+b+c+d+e == 2)
							if ( (A <= 2 && B <= 2 && a+b == 2)
							|| (A <= 2 && C <= 2 && a+c == 2)
							|| (A <= 2 && D <= 2 && a+d == 2)
							|| ( A <= 2 && E <= 2 && a+e == 2)
							|| ( B <= 2 && C <= 2 && b+c == 2)
							|| ( B <= 2 && D <= 2 && b+d == 2)
							|| ( B <= 2 && E <= 2 && b+e == 2)
							|| ( C <= 2 && D <= 2 && c+d == 2)
							|| ( C <= 2 && E <= 2 && c+e == 2)
					        || ( D <= 2 && E <= 2 && d + e == 2))
							cout << A << " " << B << " " << C << " " << D << " " << E << endl;
					}
				}
			}
		}
	return 0;
}