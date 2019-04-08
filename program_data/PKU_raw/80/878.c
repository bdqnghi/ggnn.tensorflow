
int main()
{
	int ans = 0, anstemp1=0, anstemp2 = 0, i;
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int x1, y1, z1, x2, y2, z2;
    cin >> x1>>y1>> z1>>x2>> y2>>z2;
	for (int x = x1; x <= x2 - 1; x++)
	{
		if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		{
			ans += 366;
		}
		else
		{
			ans += 365;
		}
	}
	if ((x1 % 4 == 0 && x1 % 100 != 0) || (x1 % 400 == 0))
	{
		
		
	for ( i = 1; i <= y1 - 1; i++)
	{
		anstemp1 += b[i];
	}
	anstemp1 += z1;
	}
	else
	{
		for (i = 1; i <= y1 - 1; i++)
		{
		anstemp1 += a[i];
		}
		anstemp1 += z1;
	}


	
	if ((x2 % 4 == 0 && x2 % 100 != 0) || (x2 % 400 == 0))
	{
		
		
	for (i = 1; i <= y2 - 1; i++)
	{
		anstemp2 += b[i];
	}
	anstemp2 += z2;
	}
	else
	{
		for (i = 1; i <= y2 - 1; i++)
		{
		anstemp2 += a[i];
		}
		anstemp2 += z2;
	}


	cout << ans - anstemp1 + anstemp2;

	return 0;
}
