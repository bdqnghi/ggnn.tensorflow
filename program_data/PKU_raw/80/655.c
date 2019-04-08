
int main()
{
    int i,j,k,days1=0,days2=0;
    int days=0,leap_year=0,startYear,startMonth,startDay,endYear,endMonth,endDay;
    int year[2]={365,366},month[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    cin >> startYear >> startMonth >> startDay;
    cin >> endYear >> endMonth >> endDay;
    if(startYear==endYear)
    {
      if((startYear % 4 == 0 && startYear %100 != 0 )||( startYear % 400 == 0))
      {
       for(i=0;i<startMonth-1;i++)
       {days1 = days1+month[12+i];}
       days1 = days1+startDay;
       for(j=0;j<endMonth-1;j++)
       {days2=days2+month[12+j];}
       days2 =days2+endDay;
       days= days2-days1;
       cout << days << endl;
      }
     else
      {
       for(i=0;i<startMonth-1;i++)
       {days1=days1+month[i];}
       days1=days1+startDay;
       for(j=0;j<endMonth-1;j++)
       {days2=days2+month[j];}
       days2=days2+endDay;
       days= days2-days1;
       cout << days << endl;
      }
    }
   if(startYear!=endYear)
   {
     k=startYear;
     while(k<endYear)
     {leap_year=((k%4==0&&k%100!=0) ||(k%400==0));
     days=days+year[leap_year];
     k++;  
     }
     if((startYear % 4 == 0 && startYear %100 != 0 )||( startYear % 400 == 0))
      {
       for(i=0;i<startMonth-1;i++)
       {days1=days1+month[12+i];}
       days1=days1+startDay;
      }
     else
      {
      for(i=0;i<startMonth-1;i++)
       {days1=days1+month[i];}
       days1=days1+startDay;
      }
       days=days-days1;
      if((endYear % 4 == 0 && endYear %100 != 0 )||( endYear % 400 == 0))
       {
       for(i=0;i<endMonth-1;i++)
       {days2=days2+month[12+i];}
       days2=days2+endDay;
       }
      else
      {
       for(i=0;i<endMonth-1;i++)
       {days2=days2+month[i];}
        days2=days2+endDay;
      }
       days=days+days2;
       cout << days << endl;
    }

    return 0;
}
