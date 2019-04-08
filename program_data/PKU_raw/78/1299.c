int main()
{
	char name[5] = {"zqsl"};
	int i, max = 0, weiz, weiq, weis, weil, wei[4] = {0};
	for (weiz = 10; weiz <= 50; weiz += 10)
		for (weiq = 10; weiq <= 50; weiq += 10)
			for (weis = 10; weis <= 50; weis += 10)
				for (weil = 10; weil <= 50; weil += 10)
					if ((weiz + weiq == weis + weil) && (weiz + weil > weis + weiq) && (weiz + weis < weiq))
					{
						wei[0] = weiz;
						wei[1] = weiq;
						wei[2] = weis;
						wei[3] = weil;
					}
	for (i = 0; i < 4; i++)
		if (wei[i] == 50)
		{
			cout << name[i] << ' ' << "50" << endl;
			wei[i] = 0;
		}
	for (i = 0; i < 4; i++)
		if (wei[i] == 40)
		{
			cout << name[i] << ' ' << "40" << endl;
			wei[i] = 0;
		}
	for (i = 0; i < 4; i++)
		if (wei[i] == 30)
		{
			cout << name[i] << ' ' << "30" << endl;
			wei[i] = 0;
		}
	for (i = 0; i < 4; i++)
		if (wei[i] == 20)
		{
			cout << name[i] << ' ' << "20" << endl;
			wei[i] = 0;
		}
	for (i = 0; i < 4; i++)
		if (wei[i] == 10)
			cout << name[i] << ' ' << "10" << endl;
	return 0;
}
