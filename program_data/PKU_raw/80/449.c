int main()
{
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sy, sm, sd, ey, em, ed, y, s = 0, i, j;
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	if(ey > sy)
	{
		for(i = sm - 1; i < 12; i++)
		{
			if((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
			 s = s + b[i];
			else
				s = s + a[i];
		}
		for(i = sy + 1; i < ey; i++)
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
				for(int j = 0; j < 12; j++)
					s = s + b[j];
			else
				for(int j = 0; j < 12; j++)
					s = s + a[j];
			if((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
			for(int j = 0; j < em - 1; j++)
			{
				s = s + b[j];
			}
			else
				for(int j = 0; j < em - 1; j++)
				{
				s = s + a[j];
				}
	}
	else
	{
		for(i = sm - 1; i < em - 1; i++)
		{
			if((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
			 s = s + b[i];
			else
				s = s + a[i];
		}
	}
	s = s + ed - sd;
	cout << s;
	return 0;
}