main()
{
long year,month,day;
long totalday;
int week;
int monthday[12]={0,31,59,90,120,151,181,212,243,273,304,334};
int monthdayLeap[12]={0,31,60,91,121,152,182,213,244,274,305,335};
char * weekname[7]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};


scanf("%ld %ld %ld",&year,&month,&day);

totalday=((year-1)%7)*365+(year-1)/4-(year-1)/100+(year-1)/400;

if((year%4==0)&&(year%100!=0)||(year%400==0))
 totalday+=monthdayLeap[month-1];
else
 totalday+=monthday[month-1];

 totalday+=day;

 week=totalday%7;

printf("%s\n",weekname[week]);

}


