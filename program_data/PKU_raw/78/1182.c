//???
int main()
{
	int Z = 0, Q = 0, S = 0, L = 0, i = 0;
	for (Z = 1; Z <= 5; Z++)
		for (Q = 1; Q <= 5 ; Q++)
			for (S = 1; S <= 5 ; S++)
				for (L =1; L <= 5 ; L++)
				{
					if (((Z + Q) == (S + L)) + ((Z + L) > (S + Q)) + ((Z + S) < Q) == 3)
					{
						for (i = 5; i >= 1; i--)
						{
							if(i == Z)
								cout << "z " << 10 * i << endl;
							else if(i == Q)
								cout << "q " << 10 * i << endl;
							else if(i == S)
								cout << "s " << 10 * i << endl;
							else if (i == L)
								cout << "l " << 10 * i << endl;
						}
						break;
					}
				}
				return 0;
}

