int main(){
    int startYear,startMonth,startDay,endYear,endMonth,endDay;
    int s,i,days,days1,days2,year;
    cin>>startYear>>startMonth>>startDay>>endYear>>endMonth>>endDay;
    days=0;days1=0;days2=0;
    int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<startMonth;i++)
    {if((startYear%4==0&&startYear%100!=0)||(startYear%400==0))
		month[2]=29;
    	days1=days1+month[i];}
    days1=days1+startDay;
    for(i=endMonth;i<13;i++)
    	{if((endYear%4==0&&endYear%100!=0)||(endYear%400==0))
    		month[2]=29;
    	days2=days2+month[i];}
    days2=days2-endDay;
    s=0;
    for(year=startYear;year<=endYear;year++)
    	if((year%4==0&&year%100!=0)||(year%400==0))
    		s++;
    days=365*(endYear-startYear+1)-days2-days1+s;
    cout<<days;
  return 0;
}