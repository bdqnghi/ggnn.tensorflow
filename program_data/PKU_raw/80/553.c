int main()
{
	int sy, sm, sd,ey, em,ed,i,num = 0, k;
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	if (sm <= 2)
	{
			for (i = sy; i < ey;i ++)
			{
				num+=365;
				if( (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
					++num;
			}
			if (sm ==2 && sd == 29) --num;
	}
	else
	{
			for (i = sy + 1; i <= ey;i ++)
			{
				num+=365;
				if( (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
					++num;
			}
	}
	if (em > sm)
	{
		num = num + (em - sm) *30;
		for (i = sm; i < em;i++)
		{
			switch(i)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: ++num; break;
			case 2: 
				{
					if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
					num = num - 1;
					else 
						num = num - 2;
					break;
				}
			default: break;
			}
		}
		num = num + ed - sd;
	}
	else 
	{
		k= (sm - em) * 30;
		for (i = em; i < sm;i++)
		{
			switch(i)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: ++k; break;
			case 2:
				{
					if ((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
					k = k - 1;
					else 
						k = k - 2; 
					break;
				}
			default: break;
			}
		}
		k = sd - ed + k;
		num = num - k;
	}
	cout << num << endl;						
	return 0;
}