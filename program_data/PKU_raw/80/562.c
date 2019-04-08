
int day_of_year(int n)
{
  if(n%400==0) return 366;
  if((n%4==0)&&(n%100!=0)) return 366; else return 365;
}

int day_of_month(int month,int year)
{
 if(month==2)
  if(day_of_year(year)==366) return 29;else return 28;
 if((month==4)||(month==6)||(month==9)||(month==11)) return 30;
 else return 31;
}

int main()
{
 int year1,year2,month1,month2,day1,day2,i,j,sum,sumyear,summonth1,summonth2;
 scanf("%d %d %d\n%d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
 sum=sumyear=summonth1=summonth2=0;
 for(i=year1;i<year2;i++)
  sumyear+=day_of_year(i);
 for(i=1;i<month1;i++)
 summonth1=summonth1+day_of_month(i,year1);
 for(i=1;i<month2;i++)
 summonth2=summonth2+day_of_month(i,year2);
 sum=sumyear+summonth2+day2-summonth1-day1;
 printf("%d",sum);
 scanf("%d",&i);
 return 0;
}