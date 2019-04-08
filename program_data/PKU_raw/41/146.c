
int main()
{
	int pA, pB, pC, pD, pE;
	int tA, tB, tC, tD, tE;
	int yes, flag = 0;

	for (pA = 1; pA <= 5; pA++)
	{
		for (pB = 1; pB <= 5; pB++)
		{
			for (pC = 1; pC <= 5; pC++)
			{
				for (pD = 2; pD <= 5; pD++)
				{
					for (pE = 1; pE <= 5; pE++)
					{
						if ((pA == pB) || (pA == pC) || (pA == pD) || (pA == pE) || (pB == pC) ||
							(pB == pD) || (pB == pE) || (pC == pD) || (pC == pE) || (pD == pE))
							continue;
						tA = (((pA == 1) || (pA == 2)) && (pE == 1));
						tB = (pB == 2);
						tC = (((pC == 1) || (pC == 2)) && (pA == 5));
						tD = (((pD == 1) || (pD == 2)) && (pC != 1));
						tE = 0;
						yes = tA + tB + tC + tD + tE;
						if (yes == 2)
						{
							flag = 1;
							cout << pA << ' ' << pB << ' ' << pC << ' ' << pD << ' ' << pE << endl;
							break;
						}
					}
					if (flag) break;
				}
				if (flag) break;
			}
			if (flag) break;
		}
		if (flag) break;
	}

	return 0;
}