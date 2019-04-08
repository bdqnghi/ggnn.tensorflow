
int main(int argc, char* argv[])
{
	int year,month,day,n;
	int m=0;
	scanf("%d %d %d",&year,&month,&day);
	if (year%4==0)
		if (year%100==0)
			if (year%400==0)
				n=29;
			else
				n=28;
		else
			n=29;
	else 
		n=28;
	if (month==1)
	{
		printf("%d",day);
		return 0;
	}
	if (month==2)
	{
		m=31+day;
		printf("%d",m);
		return 0;
	}
	if (month==3)
	{
		m=31+n+day;
		printf("%d",m);
		return 0;
	}
	if (month==4)
	{
		m=31+n+31+day;
		printf("%d",m);
		return 0;
	}
	if (month==5)
	{
		m=31+n+31+30+day;
		printf("%d",m);
		return 0;
	}
	if (month==6)
	{
		m=31+n+31+30+31+day;
		printf("%d",m);
		return 0;
	}
	if (month==7)
	{
		m=31+n+31+30+31+30+day;
		printf("%d",m);
		return 0;
	}
	if (month==8)
	{
		m=31+n+31+30+31+30+31+day;
		printf("%d",m);
		return 0;
	}
	if (month==9)
	{
		m=31+n+31+30+31+30+31+31+day;
		printf("%d",m);
		return 0;
	}
	if (month==10)
	{
		m=31+n+31+30+31+30+31+31+30+day;
		printf("%d",m);
		return 0;
	}
	if (month==11)
	{
		m=31+n+31+30+31+30+31+31+30+31+day;
		printf("%d",m);
		return 0;
	}
	if (month==12)
	{
		m=31+n+31+30+31+30+31+31+30+31+30+day;
		printf("%d",m);
		return 0;
	}
	return 0;
	}


