int main()
{
	int A, B, C, D, E, a, b, c, d, e;
	for(A = 1; A <= 5; A++)
		for(B = 1; B <= 5; B++)
			for(C = 1; C <= 5; C++)
				for(D = 1; D <= 5; D++)
					for(E = 1; E <= 5; E++)
					{
						a = (E == 1);
						b = (B == 2);
						c = (A == 5);
						d = (C != 1);
						e = (D == 1);
						if((A != B)&&(A != C)&&(A != D)&&(A != E)&&(B != C)&&(B != D)&&(B != E)&&(C != D)&&(C != E)&&(D != E)&&
						((A * a + B * b + C * c + D * d + E * e) == 3)&&(a + b + c + d + e == 2)
						   && (E != 2)&& (E != 3))
							cout << A << " " << B << " " << C << " " << D << " " << E << endl;
				}
				    
				    return 0;
}				    
