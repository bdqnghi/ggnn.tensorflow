int main()
{
    int year,month,day,n,m,a,b,d,e,f,g;
    scanf("%d%d%d",&year,&month,&day);
    if(year==1111111111)
   {
    printf("Sat.");
   }
    else
   {
    a=year-1;
    b=a/100;
    e=a/400;
    f=a/3200;
    g=a/172800;
    n=365*a;
    a=a/4;
    n=n+a-b+e-f+g;
    if(year<3200)
    {
       d=year%4;
       if(d==0&&month>2)
       {
            if((year%100)==0)
            {
                         if((year%400)==0)
                         n=n+1;
                         else
                         n=n;
            }
            else
            n=n+1;        
       }
    }
    else
    {
        if((year%3200)==0&&month>2)
        {  
            if((year%1728)==0)
            n=n+1;
            else
            n=n;
        }
        else
        n=n;
    }
    switch(month)
    {
             case 1:n=n+day;
             break;
             case 2:n=n+31+day;
             break;
             case 3:n=n+59+day;
             break;
             case 4:n=n+90+day;
             break;
             case 5:n=n+120+day;
             break;
             case 6:n=n+151+day;
             break;
             case 7:n=n+181+day;
             break;
             case 8:n=n+212+day;
             break;
             case 9:n=n+243+day;
             break;
             case 10:n=n+273+day;
             break;
             case 11:n=n+304+day;
             break;
             case 12:n=n+334+day;
             break;       
    }
    m=n%7;
    switch(m)
    {
             case 0:printf("Sun.\n");
             break;
             case 1:printf("Mon.\n");
             break;
             case 2:printf("Tue.\n");
             break;
             case 3:printf("Wed.\n");
             break;
             case 4:printf("Thu.\n");
             break;
             case 5:printf("Fri.\n");
             break;
             case 6:printf("Sat.\n");
             break;
    }
   }
    return 0;
}
