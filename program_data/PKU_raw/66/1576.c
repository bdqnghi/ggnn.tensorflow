int main()
{
	int judge=1;
	int dayofmonth[13]={31,28,31,30,31,30,31,31,30,31,30,31};
  int year,month,day;
  cin>>year>>month>>day;
  int time=(year-1)/400;
  for(int i=time*400+1;i<year;i++)
  {
   if(i%4==0&&i%100!=0||i%400==0)
	   judge+=2;
   else judge+=1;
  }

  
  dayofmonth[1]=28;
  if(year%4==0&&year%100!=0||year%400==0)
	  dayofmonth[1]=29;
  for(int i=0;i<month-1;i++)
	  judge+=dayofmonth[i];
  judge+=day-1;
  int weekday=judge%7;
  switch(weekday)
  {
case 1:cout<<"Mon."<<endl;break;
case 2:cout<<"Tue."<<endl;break;
case 3:cout<<"Wed."<<endl;break;
case 4:cout<<"Thu."<<endl;break;
case 5:cout<<"Fri."<<endl;break;
case 6:cout<<"Sat."<<endl;break;
case 0:cout<<"Sun."<<endl;break;
  }
 
  return 0;
}