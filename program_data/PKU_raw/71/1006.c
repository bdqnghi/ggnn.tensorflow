
int main()
{
    int day(int m,int leap);
    int i,n,year[200][3],leap=0,day1,day2,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d %d",&year[i][0],&year[i][1],&year[i][2]);
    for(i=0;i<n;i++)
    {
        if( (year[i][0]%4==0&&year[i][0]%100!=0) ||year[i][0]%400==0 )
            leap=1;
        else
            leap=0;
        day1=day(year[i][1],leap);
        day2=day(year[i][2],leap);
        d=day1-day2;
        d=(int)fabs( (double)d );
        if(d%7==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return(0);
}

int day(int m,int leap)
{
    int sum;
    switch(m)
    {
        case 1:sum=1;break;
        case 2:sum=32;break;
        case 3:sum=60;break;
        case 4:sum=91;break;
        case 5:sum=121;break;
        case 6:sum=152;break;
        case 7:sum=182;break;
        case 8:sum=213;break;
        case 9:sum=244;break;
        case 10:sum=274;break;
        case 11:sum=305;break;
        case 12:sum=335;break;
        default:break;
    }
    if(m>=3)
        sum=sum+leap;
    return(sum);
}
