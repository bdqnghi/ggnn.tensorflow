int main()
{
    int i,n,year,month1,month2,sum=0,day,p;
    cin >> n;
    for(i=1;i<=n;i++)
    {
         sum=0;
         cin >> year >> month1 >> month2; 
         if(month1>month2)
         {
            p=month1;
            month1=month2;
            month2=p;    
         }                     
        if(year%400==0||(year%4==0&&year%100!=0))
        {
         for(1;month1<month2;month1++)
        {                                         
              if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
              {
                day=31;
              }
              if(month1==4||month1==6||month1==9||month1==11)
              {
                day=30;
              }
              if(month1==2)
              {
                day=29;
              }
                 sum=sum+day;
        }
              if(sum%7==0)
              cout << "YES" << endl;
              else
              cout << "NO" << endl;
        }
        if(year%4!=0||(year%100==0&&year%400!=0))
        {
            for(1;month1<month2;month1++)
            {                                  
              if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
              {
                day=31;
              }
              if(month1==4||month1==6||month1==9||month1==11)
              {
                day=30;
              }
              if(month1==2)
              {
                day=28;
              }
              
                   sum=sum+day;
            }
              if(sum%7==0)
              cout << "YES" << endl;
              else
              cout << "NO" << endl;
        }
    }      
return 0;
}