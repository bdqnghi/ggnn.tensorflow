int main()
{
    int mon[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                    {0,31,29,31,30,31,30,31,31,30,31,30,31}};
    int days=0;
    int y1,m1,d1,y2,m2,d2;
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    for(int i=y1;i<y2;i++)
    {
        int day;
        int flag1=((i% 4 == 0 && i % 100 != 0) || (i % 400 == 0))&&m1<=2;
        int flag2=(((i+1)% 4 == 0 && (i+1) % 100 != 0) || ((i+1) % 400 == 0))&&m1>2;
        if(flag1||flag2)
            day=366;
        else day=365;
        days+=day;
    }
    if(m1<m2)
    {
        for(int i=m1;i<m2;i++)
        {
            int flag=(y2% 4 == 0 && y2% 100 != 0) || (y2 % 400 == 0);
            days+=mon[flag][i];
        }
    }
    else if(m1>m2)
    {
        for(int i=m2;i<m1;i++)
        {
            int flag=(y2% 4 == 0 && y2% 100 != 0) || (y2 % 400 == 0);
            days-=mon[flag][i];
        }
    }
    days+=d2-d1;
    cout<<days;
    return 0;
}
