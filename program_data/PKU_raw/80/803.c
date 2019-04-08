


int main()
{
    int y,m,d;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y>>m>>d;

    int t=0;
    for (int year=1;year<=y-1;year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            t+=366; else t+=365;
    }
    int year=y;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) month[2]=29; else month[2]=28;
    for (int i=1;i<=m-1;i++)
    {
        t=t+month[i];
    }
    t+=d;
    int t2=t;

    cin>>y>>m>>d;

    t=0;
    for (int year=1;year<=y-1;year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            t+=366; else t+=365;
    }
    year=y;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) month[2]=29; else month[2]=28;
    for (int i=1;i<=m-1;i++)
    {
        t=t+month[i];
    }
    t+=d;

    cout<<abs(t-t2);
    return 0;
}
