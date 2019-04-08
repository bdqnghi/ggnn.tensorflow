int yuandan(int year,int month,int day);
int main()
{
    int year1,year2,month1,month2,day1,day2,t;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int yuandan1=0,yuandan2=0;
    int num=0;
    int i;
    cin>>year1>>month1>>day1;
    cin>>year2>>month2>>day2;
    if(year2<year1)
    {
     t=year1;year1=year2;year2=t;
     t=month1;month1=month2;month2=t;
     t=day1;day1=day2;day2=t;                              
    }
    yuandan1=yuandan(year1,month1,day1);
    yuandan2=yuandan(year2,month2,day2);
    
    for(i=year1;i<year2;i++)
    {
      num+=365;
      num+= ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));                       
    }
    
    num=num+yuandan2-yuandan1;
    cout<<num;
    
    
    
return 0;    
}
int yuandan(int year,int month,int day)
{
  int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  yue[2]=29;
  else
  yue[2]=28;
  
  int i,sum=0;
  if(month==1)
  return day;
  else
  {
    for(i=1;i<=month-1;i++)
    sum+=yue[i];  
    sum+=day ; 
  }    
    return sum;
}
