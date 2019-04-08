


int main()
{
	int t=0;
	int monthday[13]={0,31,28+t,31,30,31,30,31,31,30,31,30,31};

	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);

	if(year%4 == 0 && year%100 !=0 || year%400 == 0) t=1;

	int summonth=0;
	int sum=0;

	int i;
	for(i=0;i<month;i++) summonth+=monthday[i];
	sum=summonth+day;
	printf("%d",sum);


	
    return 0;

}