//  ???
//  ??? 1100012820
//  20111012
//*******************
int main()
{
	int a, b, c, d;
	int cc1, cc2, cc3;
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 3; b++)
		{
			for (c = 1; c <= 3; c++)
			{
				cc1 = (b > a) + (c == a);
				cc2 = (a > b) + (a > c);
				cc3 = (c > b) + (b > a);
				if (((a + cc1) == 3) && ((b + cc2) == 3) && ((c + cc3) == 3))
				{
					if (a == 3)
					{
						if (b == 2)
							cout << "CBA" << endl;
						else
							cout << "BCA" << endl;
					}
					if (b == 3)
					{
						if (a == 2)
							cout << "CAB" << endl;
						else
							cout << "ACB" << endl;
					}
					if (c == 3)
					{
						if (b == 2)
							cout << "ABC" << endl;
						else
							cout << "BAC" << endl;
					}
				}
			}
		}
	}
	return 0;
}