int GetMonthDays(int year,int month);
int CheckLeap(int year);//???? 
main()
{
      int year,month,day=1,s=0,i;
      scanf("%d%d%d",&year,&month,&day);
      for(i=1;i<month;i++)
      {
         s+=GetMonthDays(year,i);                    
      }
      s+=day;
      printf("%d",s);
}

int GetMonthDays(int year,int month)//????????? 
{
    int day;
    if(month==4||month==6||month==9||month==11)
         day=30;
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
         day=31;
    if(month==2)
    {
      if(CheckLeap(year)==1)
         day=29;//???29? 
      if(CheckLeap(year)==0)
        day=28;//????28? 
    }
    return day;
}

int CheckLeap(int year)//????????? ?????1??????0 
{
    int jugde=0;//??? 
    if(year%100!=0)
    {
      if(year%4==0)
        jugde=1;
    }//????100?????4?????? 
    if(year%100==0)
    {
       if(year%400==0)
         jugde=1;
    }//???100???????400??????? 
    return jugde;//????? 
}