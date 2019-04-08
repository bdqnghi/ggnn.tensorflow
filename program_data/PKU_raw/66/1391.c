int main()
{
    int year,month,day,i,sum=0,rest;
    scanf("%d%d%d",&year,&month,&day);
    if(year%400!=0)
    {
        year=year%400;
        for(i=1;i<year;i++)
        {
            if(i%4==0&&i%100!=0)
            {
                  sum+=366;
            }
            else
            {
                sum+=365;
            }
        }
    }
    else
    {
        year=400;
        for(i=1;i<400;i++)
        {
             if(i%4==0&&i%100!=0)
            {
                  sum+=366;
            }
            else
            {
                sum+=365;
            }
        }
    } 
    for(i=1;i<month;i++)
    {
      if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
      {
          sum+=31;
      }
      else if(i==4||i==6||i==9||i==11)
      {
           sum+=30;
      }
      else
      {
          if(year==400||(year%100!=0&&year%4==0))
               sum+=29;
          else 
               sum+=28;                                   
      }
    }
    sum=sum+day;
    rest=sum%7;
    if(rest==0)
    {
             printf("Sun.");
    }
    else if(rest==1)
    {
             printf("Mon.");
    }
    else if(rest==2)
    {
             printf("Tue.");
    }
    else if(rest==3)
    {
             printf("Wed.");
    }
    else if(rest==4)
    {
             printf("Thu.");
    }
    else if(rest==5)
    {
             printf("Fri.");
    }
    else
    {
             printf("Sat.");
    }
    return 0;
}
                    
              
