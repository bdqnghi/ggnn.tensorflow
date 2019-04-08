
int months1[12]={31,28,31,30,31,30,31,31,30,31,30,31},
	months2[12]={31,29,31,30,31,30,31,31,30,31,30,31};		//months1?????months2????
int check (int year);

int main()
{
	int year1,year2,month1,month2,day1,day2;
	int i,x=0,sum=0;
	cin>>year1>>month1>>day1>>year2>>month2>>day2;			//??????
	for (i=year1+1;i<year2;i++)
	{
		x=check(i);
		if (x==0)											//?????
			sum=sum+365;
		else if (x==1)										//?????
			sum=sum+366;
	}
	if (year1!=year2)
	{
		if (check(year1))										//year1???
		{
			for (i=month1+1;i<=12;i++)
				sum=sum+months2[i-1];
			sum=sum+months2[month1-1]-day1;
		}
		else													//year1???
		{
			for (i=month1+1;i<=12;i++)
				sum=sum+months1[i-1];
			sum=sum+months1[month1-1]-day1;
		}
		if (check(year2))										//year2???
		{
			for (i=1;i<month2;i++)
				sum=sum+months2[i-1];
			sum=sum+day2;
		}
		else													//year2???
		{
			for (i=1;i<month2;i++)
				sum=sum+months1[i-1];
			sum=sum+day2;
		}
	}
	else
	{
		if (check(year1))										//year1???
		{
			for (i=month1+1;i<month2;i++)
				sum=sum+months2[i-1];
			if (month1!=month2)
				sum=sum+months2[month1-1]-day1+day2;
			else
				sum=day2-day1;
		}
		else													//year1???
		{
			for (i=month1+1;i<month2;i++)
				sum=sum+months1[i-1];
			if (month1!=month2)
				sum=sum+months1[month1-1]-day1+day2;
			else
				sum=day2-day1;
		}
	}
	cout<<sum<<endl;
	return 0;
}

int check (int year)										//?????????????
{
	if (((year%4==0)&&(year%100!=0))||(year%400==0))
		return 1;
	else
		return 0;
}