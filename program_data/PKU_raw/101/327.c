int main()
{
	int a, b, c, A, B, C, D, E, F;
	//	?????????
	for(a = 0; a <= 2; a++)
		for(b = 0; b <= 2; b++)
			for(c = 0; c <= 2; c++)
			{
				A = b > a;
				B = c == a;
				C = a > b;
				D = a > c;
				E = c > b;
				F = b > a;
				//	??????????????2????????
				if(A + B + a == 2 && C + D + b == 2 && E + F + c == 2)
				{
					if(A + B == 0)
					{
						if(C + D == 2)
							cout << "B" << "C" << "A" << endl;
						if(E + F == 2)
							cout << "C" << "B" << "A" << endl;
					}
					if(D + C == 0)
					{
						if(A + B == 2)
							cout << "A" << "C" << "B" << endl;
						if(E + F == 2)
							cout << "C" << "A" << "B" << endl;
					}
					if(E + F == 0)
					{
						if(A + B == 2)
							cout << "A" << "B" << "C" << endl;
						if(C + D == 2)
							cout << "B" << "A" << "C" << endl;
					}
				}
			}
			return 0;
}

					
