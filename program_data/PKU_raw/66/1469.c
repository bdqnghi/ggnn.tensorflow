int main()
{
    int Ans=0,y,m,d,yy=0,M[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char week[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    cin >> y >> m >> d;
    if(y%400==0||(y%100!=0&&y%4==0))
    M[1]++;
    for(int i=0;i<m-1;i++)
    Ans+=M[i];
    Ans+=d;
    if(y>400&&y%400!=0)
        y=y%400;
        if(y%400==0)
        y=400;
    for(int i=1;i<y;i++)
    if(i%400==0||(i%100!=0&&i%4==0))
    Ans+=2;
    else  Ans++;
    Ans=(Ans)%7;
    cout<<week[Ans]<<"."<<endl;
    return 0;
}

