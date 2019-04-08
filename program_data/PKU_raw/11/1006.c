int main()
{
 int i,year,month,date,count=0,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 cin>>year>>month>>date;
 for(i=1;i<month;i++)
  count+=day[i];
 count+=date;
 if(month>2)
  if((year%400==0)||((year%100!=0)&&(year%4==0)))
   count++;
 cout<<count;
 return 0;
}