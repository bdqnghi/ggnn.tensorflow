int main()
{
    int year,month,day;
    int i,days=0,n;
    scanf("%d%d%d",&year,&month,&day);
    n=(year-1)%400+1;
    for(i=1;i<n;i++)
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
       switch (days%7) {
       case 1:
       printf("Mon.");
       break;
       case 2:
        printf("Tue.");
         break;
         case 3:
       printf("Wed.");
       break;
         case 4:
         printf("Thu.");
        break;
        case 5:
        printf("Fri.");
         break;
         case 6:
         printf("Sat.");
        break;
        case 0:
         printf("Sun.");
     }            	
         return 0;
}
