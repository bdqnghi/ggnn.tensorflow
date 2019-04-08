

int dd[] = {0,0,31,59,90,120,151,181,212,243,273,304,344};

int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	
	int l = (y-1)/4-(y-1)/100+(y-1)/400;
	
	
	if(m>2 && y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				l++;
		}
		else
		{
			l++;
		}
	}
	
	int mod = (((y-1) * (365%7)) % 7 + l + dd[m] + d)%7;
	
	switch(mod)
	{
	case 1:
		printf("Mon.\n");
		break;
	case 2:
		printf("Tue.\n");
		break;
	case 3:
		printf("Wed.\n");
		break;
	case 4:
		printf("Thu.\n");
		break;
	case 5:
		printf("Fri.\n");
		break;
	case 6:
		printf("Sat.\n");
		break;
	case 0:
		printf("Sun.\n");
		break;
	}
	
	return 0;
}