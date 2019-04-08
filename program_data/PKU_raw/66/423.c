int main()
{
 int day,month,year,i,days=0,s,k;
 int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
 char *week[7]={
  "Sun.",
  "Mon.",
  "Tue.",
  "Wed.",
  "Thu.",
  "Fri.",
  "Sat."};
 scanf("%d %d %d",&year,&month,&day);
 if ((year%4==0)&&(year%100!=0)||(year%400==0)) 
  mont[2]=29;
 else
  mont[2]=28;
 for (i=0;i<month;i++)
  days+=mont[i];
 days+=day;
 s=year-1+(int)((year-1)/4)-(int)((year-1)/100)+(int)((year-1)/400)+days;
 k=s%7;
 printf("%s",week[k]);
 return 0;
} 