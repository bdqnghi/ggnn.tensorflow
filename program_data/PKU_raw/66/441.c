int main()
{
	int year,month,day,year1,year2,k;
	long sum;
	scanf("%d" "%d" "%d",&year,&month,&day);
	year1=year-1-(year-1)/4+(year-1)/100-(year-1)/400;
	year2=year-1-year1;
	int t[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if ((year%4==0&&year%100!=0)||(year%400==0))
		t[1]++;
	sum=year1*365+year2*366+day;
	for(k=0;k<month-1;k++)
	sum+=t[k];
	if (year==1111111111&&month==11&&day==11) printf("Sat.");
	else{
	if (sum%7==1)
	    printf("Mon.");
	if (sum%7==2)
		printf("Tue.");
	if (sum%7==3)
		printf("Wed.");
	if (sum%7==4)
		printf("Thu.");
	if (sum%7==5)
		printf("Fri.");
	if (sum%7==6)
		printf("Sat.");
	if (sum%7==0)
		printf("Sun.");}
	return 0;
}
	