
int run(int nian)
{
	if (nian%400==0)
		return 1;
	else
		if (nian%100==0)
			return 0;
		else
			if (nian%4==0)
				return 1;
			else
				return 0;
}

int mon(int m,int n)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		if (run(n))
			return 29;
		else
			return 28;
	}
}


int main()
{
	int year,month,day,date,i;
	scanf("%d %d %d",&year,&month,&day);
	date=0;
	for (i=1;i<month;i++)
		date=date+mon(i,year);
	date=date+day;
	printf("%d",date);
	return 0;
}