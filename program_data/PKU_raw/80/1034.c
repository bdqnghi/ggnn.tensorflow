int main()
{
	int time1=0,time2=0,result=0;
   int year1,year2,month1,month2,day1,day2;
   cin>>year1>>month1>>day1>>year2>>month2>>day2;
   int dayofmonth[13]={31,28,31,30,31,30,31,31,30,31,30,31};
   int stayear=min(year1,year2);
   if(stayear%4==0&&stayear%100!=0||stayear%400==0)
	   dayofmonth[1]=29;
   for(int month=0;month<month1-1;month++)
	   time1+=dayofmonth[month];
   time1+=day1-1;
   dayofmonth[1]=28;
   for(int year=stayear;year<max(year1,year2);year++)
   {
      if(year%4==0&&year%100!=0||year%400==0)
	   time2+=366;
	  else time2+=365;
   }
	  int temp=max(year1,year2);
if(temp%4==0&&temp%100!=0||temp%400==0)
	   dayofmonth[1]=29;
for(int monthtemp=0;monthtemp<month2-1;monthtemp++)
	time2+=dayofmonth[monthtemp];
time2+=day2-1;
cout<<time2-time1<<endl;

return 0;
   }
   