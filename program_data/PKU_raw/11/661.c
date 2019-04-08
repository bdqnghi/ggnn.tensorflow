int main()
{
    int y,m,d,sum,jan=31,feb,mar=31,apr=30,may=31,jun=30,jul=31,aug=31,sep=30,oct=31,nov=30;
    scanf("%d%d%d",&y,&m,&d);
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
    feb=29;
    else feb=28;
    switch (m)
    {
    case 1:sum=d;break;
    case 2:sum=jan+d;break;
    case 3:sum=jan+feb+d;break;
    case 4:sum=jan+feb+mar+d;break;
    case 5:sum=jan+feb+mar+apr+d;break;
    case 6:sum=jan+feb+mar+apr+may+d;break;
    case 7:sum=jan+feb+mar+apr+may+jun+d;break;
    case 8:sum=jan+feb+mar+apr+may+jun+jul+d;break;
    case 9:sum=jan+feb+mar+apr+may+jun+jul+aug+d;break;
    case 10:sum=jan+feb+mar+apr+may+jun+jul+aug+sep+d;break;
    case 11:sum=jan+feb+mar+apr+may+jun+jul+aug+sep+oct+d;break;
    case 12:sum=jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+d;break;
    }
    printf("%d",sum);
    return 0;
}