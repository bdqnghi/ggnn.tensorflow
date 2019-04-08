int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int runnian(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
int tian(int y, int m, int d)
{
    int x=0;
    for (int i=0;i<m-1;i++)
    {
        x += md[i];
    }
    x += d;
    if (runnian(y)&&(m>2||(m==2 && d==29)))
        x++;
    return x;
}
int main()
{
    int y1, y2, m1, m2, d1, d2;
    long dif=0;
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    while (y2-y1>=1)
    {
        dif += 365+runnian(y1);
        y1++;
    }
    dif=dif+(tian(y2,m2,d2)-tian(y1,m1,d1));
    cout<<dif<<endl;
    return 0;
}