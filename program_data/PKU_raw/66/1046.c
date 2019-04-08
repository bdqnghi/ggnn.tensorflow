int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
int year,month,week,day,d1,d2;
int pd(int x)
{   if(x%400==0||(x%100!=0&&x%4==0))
    return 1;else return 0;
}
int main()
{   int i;
    scanf("%d%d%d",&year,&month,&day);  
    while(year>1600) year-=1600;  
    if(pd(year)) a[2]++;
    for(i=1,d2=0;i<year;i++) 
    {   d2+=(pd(i))? 366:365;
        d2=d2%7;
    }
    for(i=1,d1=0;i<month;i++)
    {   d1+=a[i];
        d1=d1%7;
    }
    week=(d1+d2+day)%7;
    switch(week)
    {
    case 1:printf("Mon.\n");break;
    case 2:printf("Tue.\n");break;
    case 3:printf("Wed.\n");break;
    case 4:printf("Thu.\n");break;
    case 5:printf("Fri.\n");break;
    case 6:printf("Sat.\n");break;
    case 0:printf("Sun.\n");break;
    }
    getchar();getchar();
    return 0;
}
