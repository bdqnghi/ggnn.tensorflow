void main()
{
    int sum=0,y1,m1,d1,y2,m2,d2,m,month;
    scanf("%d%d%d\n%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
    for(;y1<y2;y1++)
    {
        if((y1%4==0&&y1%100!=0)||(y1%400==0))sum+=366;
        else sum+=365;
    }
    if(m1>m2)
    {
        m1=m1-1;
        for(;m1>=m2;m1--)
        {
            switch(m1)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:month=31;break;
                case 4:
                case 6:
                case 9:
                case 11:month=30;break;
                case 2:
                {
                    if(y2%4==0&&y2%400!=0||y2%400==0)month=28;
                    else month=29;
                }
            }
            sum=sum-month;
        }
    }
    else if(m1<m2)
    {
        for(;m1<m2;m1++)
        {
            switch(m1)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:month=31;break;
                case 4:
                case 6:
                case 9:
                case 11:month=30;break;
                case 2:
                {
                    if((y2%4==0&&y2%400!=0)||(y2%400==0))month=29;
                    else month=28;
                }
            }
            sum+=month;
        }
    }
    sum=sum+d2-d1;
    printf("%d",sum);
}
