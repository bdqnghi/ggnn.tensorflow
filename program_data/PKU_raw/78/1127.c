
int main()
{
	int z , q , s , l;

	for (q = 30 ; q <= 50 ; q +=10)
	{
		for (z = 10 ; z <= 30 ; z +=10)
		{
			for (s = 10 ; s <= 30 ; s +=10)
			{
				for (l = 10 ; l <= 50 ; l +=10)
				{
					if ((z + q == s + l) && (z + l > s + q) && (z + s < q))
					{
						if (l >= q )
						{
							cout << "l " << l << endl << "q " << q << endl;
							if (z >= s)
								cout << "z " << z << endl << "s " << s << endl;
							else 
								cout << "s " << s << endl << "z " << z << endl;
						}
						else 
						{
							cout << "q " << q << endl;
							if ((z >= s) && (z >= l))
							{
								cout << "z " << z << endl;
								if (s >= l)
									cout << "s " << s << endl << "l " << l << endl;
								else cout << "l " << l << endl << "s " << s << endl;
							}
							else 
							{
								if (s >= l)
								{
									cout << "s " << s << endl;
									if (z >= l)
										cout << "z " << z << endl << "l " << l << endl;
									else
										cout << "l " << l << endl << "z " << z << endl;
								}
								else 
								{
									cout << "l " << l << endl;
									if (z >= s)
										cout << "z " << z << endl << "s " << s << endl;
									else
										cout << "s " << s << endl << "z " << z << endl;
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

