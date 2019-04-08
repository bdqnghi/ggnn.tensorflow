
int run (int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return (1);
	else
		return (0);
}

int day (int year,int month,int date)
{
	int i,k=2001;
	int num=0;
	while(k>0)
	{
		if(year<k)
		{
			i=k-2000;
			break;
		}
		else
			k+=2000;
	}
	for(;i<year;i++)
	{
		if(run(i)==1)
			num+=366;
		else if(run(i)==0)
			num+=365;
	}
	if(run(year)==1)
	{
		if(month==1)
			num+=date;
		else if(month==2)
			num+=31+date;
		else if(month==3)
				num+=60+date;
			else if(month==4)
				num+=91+date;
			else if(month==5)
				num+=121+date;
			else if(month==6)
				num+=152+date;
			else if(month==7)
				num+=182+date;
			else if(month==8)
				num+=213+date;
			else if(month==9)
				num+=244+date;
			else if(month==10)
				num+=274+date;
			else if(month==11)
				num+=305+date;
			else if(month==12)
				num+=335+date;
	}
	else if(run(year)==0)
	{
		if(month==1)
			num+=date;
		else if(month==2)
			num+=31+date;
		else if(month==3)
				num+=59+date;
			else if(month==4)
				num+=90+date;
			else if(month==5)
				num+=120+date;
			else if(month==6)
				num+=151+date;
			else if(month==7)
				num+=181+date;
			else if(month==8)
				num+=212+date;
			else if(month==9)
				num+=243+date;
			else if(month==10)
				num+=273+date;
			else if(month==11)
				num+=304+date;
			else if(month==12)
				num+=334+date;
	}
	return (num);
}

void week (int year,int month,int date)
{
	if(day(year,month,date)%7==0)
		printf("Sun.\n");
	else if(day(year,month,date)%7==1)
		printf("Mon.\n");
	else if(day(year,month,date)%7==2)
		printf("Tue.\n");
	else if(day(year,month,date)%7==3)
		printf("Wed.\n");
	else if(day(year,month,date)%7==4)
		printf("Thu.\n");
	else if(day(year,month,date)%7==5)
		printf("Fri.\n");
	else if(day(year,month,date)%7==6)
		printf("Sat.\n");
}

void main()
{
	int year,month,date;
	scanf("%d %d %d",&year,&month,&date);
	week(year,month,date);
}