int main()
{
	int y,m,d,sum=0,i,er;
	scanf("%d%d%d", &y, &m, &d);
	if (y>2800)
		y=y-y/2800*2800;
	for (i=1;i<y;i++)
	{
		if (i%4==0)
			if (i%100==0)
				if(i%400==0)
					sum+=366;
				else
					sum+=365;
			else
				sum+=366;
		else
			sum+=365;
	}
	if (i%4==0)
		if (i%100==0)
			if(i%400==0)
				er=29;
			else
				er=28;
		else
			er=29;
	else
		er=28;
	switch (m)
	{
	case 1:
		sum+=d;
		break;
	case 2:
		sum+=31+d;
		break;
	case 3:
		sum+=31+er+d;
		break;
	case 4:
		sum+=31+er+31+d;
		break;
	case 5:
		sum+=31+er+31+30+d;
		break;
	case 6:
		sum+=31*3+30+er+d;
		break;
	case 7:
		sum+=31*3+30*2+er+d;
		break;
	case 8:
		sum+=31*4+30*2+er+d;
		break;
	case 9:
		sum+=31*5+30*2+er+d;
		break;
	case 10:
		sum+=31*5+30*3+er+d;
		break;
	case 11:
		sum+=31*6+30*3+er+d;
		break;
	case 12:
		sum+=31*6+30*4+er+d;
		break;
	}
	if (sum%7==0)
		printf("Sun.");
	if (sum%7==1)
		printf("Mon.");
	if (sum%7==2)
		printf("Tue.");
	if (sum%7==3)
		printf("Wed.");
	if (sum%7==4)
		printf("Thu.");
	if (sum%7==5)
		printf("Fri.");
	if (sum%7==6)
		printf("Sat.");
	return 0;
}


