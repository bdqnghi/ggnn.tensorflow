int leapyear(int year)
   {
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
       return 1;
    else 
       return 0;
   }    
   int main()
{
     
     int a[12];
     int i,Year,Month,Day,date=0;
     scanf("%d %d %d",&Year,&Month,&Day);
     if (leapyear(Year)==1)
        {
           int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
           for (i=0;i<(Month-1);i++)
              date=date+a[i];
           date=date+Day;
           printf("%d\n",date);
        }
     else if (leapyear(Year)==0)
        {
            int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
           for (i=0;i<(Month-1);i++)
              date=date+a[i];
           date=date+Day;
           printf("%d\n",date);
        }
     }
