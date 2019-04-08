struct date {
   int year;
   int month;
   int day;
};
int main() 
{ 
 struct date date1,date2; 
 int days,days1=0,days2=0; 
 int daytab[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
 int i; 
 scanf("%d%d%d",&date1.year,&date1.month,&date1.day); 
 scanf("%d%d%d",&date2.year,&date2.month,&date2.day); 
 for(i=0;i<date1.month;i++)
 {
  days1 += daytab[i];
 }

 if(((date1.year%4==0&&date1.year%100!=0)||(date1.year%400==0) )&& date1.month>2) 
 { 
  days1++;
 } 
 days1 += date1.day;
 
 if(date1.year<=date2.year)
 {
 for(i=date1.year;i<date2.year;i++)
 {
  days2 += 365;
  if(((i%4)==0&&(i%100)!=0)||(i%400==0)) 
  { 
   days2++;
  } 
 }
 }
 else
  {
 for(i=date2.year;i<date1.year;i++)
 {
  days1 += 365;
  if((i%4==0&&i%100!=0)||(i%400==0)) 
  { 
   days1++;
  } 
 }
 }

 for(i=0;i<date2.month;i++)
 {
  days2 += daytab[i];
 }

 if((date2.year%4==0&&date2.year%100!=0)||(date2.year%400==0) && date2.month>2) 
 { 
  days2 ++;
 } 
 days2 += date2.day;

 days=abs(days2-days1);
 
 printf("%d\n",days); 
 return 0;
}