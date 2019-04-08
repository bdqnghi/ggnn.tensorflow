int leap_year(int y)
{
	if(y%400==0)
		return 1;
	else if(y%4==0&&y%100!=0)
		return 1;
	else
		return 0;
}
int main()
{
	int y,m,d,count;
	scanf("%d%d%d",&y,&m,&d);
	if(leap_year(y))
	{
		switch (m)
		{
		case 1:count=0;break;
		case 2:count=31;break;
		case 3:count=31+29;break;
		case 4:count=31+29+31;break;
		case 5:count=31+29+31+30;break;
		case 6:count=31+29+31+30+31;break;
		case 7:count=31+29+31+30+31+30;break;
		case 8:count=31+29+31+30+31+30+31;break;
		case 9:count=31+29+31+30+31+30+31+31;break;
		case 10:count=31+29+31+30+31+30+31+31+30;break;
		case 11:count=31+29+31+30+31+30+31+31+30+31;break;
		case 12:count=31+29+31+30+31+30+31+31+30+31+30;break;
		}
		count+=d;
	}
	else
	{
		switch (m)
		{
		case 1:count=0;break;
		case 2:count=31;break;
		case 3:count=31+28;break;
		case 4:count=31+28+31;break;
		case 5:count=31+28+31+30;break;
		case 6:count=31+28+31+30+31;break;
		case 7:count=31+28+31+30+31+30;break;
		case 8:count=31+28+31+30+31+30+31;break;
		case 9:count=31+28+31+30+31+30+31+31;break;
		case 10:count=31+28+31+30+31+30+31+31+30;break;
		case 11:count=31+28+31+30+31+30+31+31+30+31;break;
		case 12:count=31+28+31+30+31+30+31+31+30+31+30;break;
		}
		count+=d;
	}
	printf("%d\n",count);
	return 0;
}