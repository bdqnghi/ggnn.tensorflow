int main()
{ int month,day,a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  long long sum=0,year,temp,runnian;
  cin>>year>>month>>day;
  temp=year-1;
  runnian=temp/4-temp/100+temp/400;
  sum=runnian*366+(temp-runnian)*365;
  if(year%4!=0||year%100==0&&year%400!=0) a[1]=28;  
  if(month==1) sum+=day;
  else
  {for(int i=0;i<=month-2;i++)
       sum+=a[i];
   sum+=day;
  }   
   sum=sum%7;
   switch(sum)
   { case(1): cout<<"Mon.";break;
     case(2): cout<<"Tue.";break;
     case(3): cout<<"Wed.";break;
     case(4): cout<<"Thu.";break;
     case(5): cout<<"Fri.";break;
     case(6): cout<<"Sat.";break;
     case(0): cout<<"Sun.";break;
  }
   return 0;
}