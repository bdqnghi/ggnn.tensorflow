
int main()
{
	int month,day,week=0,i;
	unsigned int year;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char *weekday[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	scanf("%d%d%d",&year,&month,&day);
    week=year%7+year/4-year/100+year/400;
    for(i=0;i<month;i++)
    week=week+m[i];
	week+=day-1;
	if(((year%4==0&&year%100!=0)||(year%400==0))&&month<=2)
		week--;
    printf("%s.",weekday[week%7]);
	return 0;
}

