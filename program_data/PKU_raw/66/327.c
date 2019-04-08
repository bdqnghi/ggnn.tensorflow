
void main()
{
	int n(long year);
	int run(long y,int m,int d);
	long count(long y,int m,int d);
	int day(long s);
	void print(int s);

	int m,d;
	long y;

	scanf("%ld%d%d",&y,&m,&d);

	long sum=count(y,m,d);
	int s=day(sum);

	print(s);
}


int n(long year)
{
	int n;
	n=year/4-year/100+year/400;
	return n;
}

int run(long y,int m,int d)
{
	if((y%4==0&&y%400!=0)||y%400==0)
		if(m>2)
			return 0;
		else
			return 1;
	else
		return 0;
}

long count(long y,int m,int d)
{
	long sum;
	sum=(y-1)+n(y)-run(y,m,d);
	if(m==1)
		sum+=d;
	else if(m==2)
		sum+=31+d;
	else if(m==3)
		sum+=31+28+d;
	else if(m==4)
		sum+=31+28+31+d;
	else if(m==5)
		sum+=31+28+31+30+d;
	else if(m==6)
		sum+=31+28+31+30+31+d;
	else if(m==7)
		sum+=31+28+31+30+31+30+d;
	else if(m==8)
		sum+=31+28+31+30+31+30+31+d;
	else if(m==9)
		sum+=31+28+31+30+31+30+31+31+d;
	else if(m==10)
		sum+=31+28+31+30+31+30+31+31+30+d;
	else if(m==11)
		sum+=31+28+31+30+31+30+31+31+30+31+d;
	else if(m==12)
		sum+=31+28+31+30+31+30+31+31+30+31+30+d;

	return sum;
}

int day(long s)
{
	int day;
	day=s%7;
	return day;
}

void print(int s)
{
	switch(s)
	{
	case 0:printf("Sun.");break;
		case 1:printf("Mon.");break;
			case 2:printf("Tue.");break;
				case 3:printf("Wed.");break;
					case 4:printf("Thu.");break;
						case 5:printf("Fri.");break;
							case 6:printf("Sat.");break;
	}
}