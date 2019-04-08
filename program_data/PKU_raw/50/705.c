
int LeapQ(int);
int DayCount(int, int, int);

int main()
{
	int i, n;
	scanf("%d", &n);
	for(i=1; i<=12; i++)
	{
		if((DayCount(1,i,13)-(6-n))%7==0) printf("%d\n", i);
	}
	return 0;
}

int LeapQ(int year)
{
	return (year%400==0||year%100!=0&&year%4==0)?1:0;
}

int DayCount(int year, int month, int date)
{
	int i, num=0;
	for(i=1; i<month; i++)
	{
		if(i==2) num+=LeapQ(year)?29:28;
		else num+=(i==1||i==3||i==5||i==7||i==8||i==10||i==12)?31:30;
	}
	num+=date;
	return num;
}