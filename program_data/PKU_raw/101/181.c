int main()
{
	int a, b, c, A, B, C, D, E, F;
	for(a = 1; a <= 2; a++)
		for(b = 1; b <= 2; b++)
			for(c = 1; c <= 2; c++)
			{
				A = b > a;
				B = c == a;
				C = a > b;
				D = a > c;
				E = c > b;
				F = b > a;
				if((A + B) * (D + C) * (E + F) == 0 && A + B + C + D + E + F == 3)
				{
					if(A + B == 2)
					{
						if(C + D == 0)
							cout << "B" << "C" << "A" << endl;
						if(E + F == 0)
							cout << "C" << "B" << "A" << endl;
					}
					if(D + C == 2)
					{
						if(A + B == 0)
							cout << "A" << "C" << "B" << endl;
						if(E + F == 0)
							cout << "C" << "A" << "B" << endl;
					}
					if(E + F == 2)
					{
						if(A + B == 0)
							cout << "A" << "B" << "C" << endl;
						if(C + D == 0)
							cout << "B" << "A" << "C" << endl;
					}
				}
			}
			return 0;
}

					
