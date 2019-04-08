int main()
{
    int year,month,day;
    int i,days=0,n,m;
    scanf("%d%d%d",&year,&month,&day);
    m=(year-1)%400+1;
    for(i=1;i<m;i++)
    {
         if((i%4==0&&i%100!=0)||i%400==0)
          days += 2;
         else 
         days ++;
    }
    for(i=1;i<month;i++)
    {
         if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
         days += 3;
         else if(i==4||i==6||i==9||i==11)
         days += 2;
         else if(i==2)
         {
              if((year%4==0&&year%100!=0)||year%400==0)
              days += 1;
              else 
              days += 0;
         }
    }
    days += day;
      n = days%7;
    if(n==0)
         printf("Sun.");
         else if(n==1)
         printf("Mon.");
         else if(n==2)
         printf("Tue.");
         else if(n==3)
         printf("Wed.");
         else if(n==4)
         printf("Thu.");
         else if(n==5)
         printf("Fri.");
         else
         printf("Sat.");             	
         return 0;
}