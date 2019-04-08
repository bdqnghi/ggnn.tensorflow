
int main()
{
	int sY, sM, sD, eY, eM, eD;
	int month1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int pD = 0, spD = 0, epD = 0, ypD = 0;
	int i;
	cin >> sY >> sM >> sD >> eY >> eM >> eD;
	if(sY % 4 == 0 && sY % 100 != 0 || sY % 400 == 0)
	{
		for(i = 1; i < sM; i++)
		{
			spD += month2[i - 1];
		}
		spD += sD;
		spD = 366 - spD;
	}
	else
	{
		for(i = 1; i < sM; i++)
		{
			spD += month1[i - 1];
		}
		spD += sD;
		spD = 365 - spD;
	}
	if(eY % 4 == 0 && eY % 100 != 0 || eY % 400 == 0)
	{
		for(i = 1; i < eM; i++)
		{
			epD += month2[i - 1];
		}
		epD += eD;
	}
	else
	{
		for(i = 1; i < eM; i++)
		{
			epD += month1[i - 1];
		}
		epD += eD;
	}
	if(sY == eY)
	{
		if(sY % 4 == 0 && sY % 100 != 0 || sY % 400 == 0)
		{
			pD = spD + epD - 366;
		}
		else
		{
			pD = spD + epD - 365;
		}
	}
	else
	{
		for(i = sY + 1; i < eY; i++)
		{
			if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			{
				ypD += 366;
			}
			else
			{
				ypD += 365;
			}
		}
		pD = spD + epD + ypD;
	}
	cout << pD << endl;
	return 0;
}