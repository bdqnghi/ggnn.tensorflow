int main ()
{
	int y1,y2,m1,m2,d1,d2,i,j,sum=0,k,m,year;
	cin >>y1>>m1>>d1;
	cin >>y2>>m2>>d2;
	if (y1<y2)
	{
		for (i=y1+1;i<y2;i++)
		{
			if ((i % 4 == 0 && i% 100 != 0) || (i % 400 == 0))
				sum+=366;
			else sum+=365;
		}
		year=y1;
		for (i=m1+1;i<=12;i++)
		{
			switch (i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: m=31;break;
				case 2:  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
							 m=29;
						 else m=28;
						 break;
				case 4:
				case 6:
				case 9:
				case 11: m=30;break;
			}
			sum+=m;
		}
		switch (m1)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: m=31;break;
			case 2:  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
							m=29;
						else m=28;
						break;
			case 4:
			case 6:
			case 9:
			case 11: m=30;break;
		}
		sum +=m-d1;
		year =y2;
		for (i=1;i<m2;i++)
		{
			switch (i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: m=31;break;
				case 2:  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
							 m=29;
						 else m=28;
						 break;
				case 4:
				case 6:
				case 9:
				case 11: m=30;break;
			}
			sum+=m;
		}
		sum+=d2;
	}
	if (y1==y2)
	{
		if (m1<m2)
		{
			for (i=m1;i<m2;i++)
			{
				switch (i)
				{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12: m=31;break;
					case 2:  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
								 m=29;
							 else m=28;
							 break;
					case 4:
					case 6:
					case 9:
					case 11: m=30;break;
				}
				sum+=m;
			}
			sum+=d2;
			switch (m1)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: m=31;break;
				case 2:  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
								m=29;
							else m=28;
							break;
				case 4:
				case 6:
				case 9:
				case 11: m=30;break;
			}
			sum+=m-d1;
		}
		if (m1==m2)
			sum=d2-d1;
	}
	cout <<sum<<endl;

	return 0;
}
