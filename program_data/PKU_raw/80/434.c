int main()
{
	int i ,j ,k, ay, am, ad, by, bm, bd, day = 0;
	int moutha[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int mouthb[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	cin >> ay >> am >> ad;
	cin >> by >> bm >> bd;
	for(i = ay ; i < by; i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			day+=366;
		}
		else
		{
			day+=365;
		}
	}
	for(i = 0; i < bm - 1;i++)
	{
		if((by % 4 == 0 && by % 100 != 0) || (by % 400 == 0))
		{
			day += mouthb[i];
		}
		else
		{
			day += moutha[i];
		}
	}
	day+=bd;
	for(i = 0; i < am - 1; i++)
	{
		if((ay % 4 == 0 && ay % 100 != 0) || (ay % 400 == 0))
		{
			day -= mouthb[i];
		}
		else
		{
			day -= moutha[i];
		}
	}
	day-=ad;
	cout << day << endl;
	return 0;
}