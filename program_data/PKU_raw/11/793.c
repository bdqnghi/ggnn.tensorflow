int f1(int n)
{
    int i,m;
    for(i=1,m=0;i<n;i++)
    {
        if(i==1)
        m=m+31;
        if(i==2)
        m=m+28;
        if(i==3)
        m=m+31;
        if(i==4)
        m=m+30;
        if(i==5)
        m=m+31;
        if(i==6)
        m=m+30;
        if(i==7)
        m=m+31;
        if(i==8)
        m=m+31;
        if(i==9)
        m=m+30;
        if(i==10)
        m=m+31;
        if(i==11)
        m=m+30;
        if(i==12)
        m=m+31;
    }
    return m;
}
int f2(int n)
{
    int m,i;
    for(i=1,m=0;i<n;i++)
    {
        if(i==1)
        m=m+31;
        if(i==2)
        m=m+29;
        if(i==3)
        m=m+31;
        if(i==4)
        m=m+30;
        if(i==5)
        m=m+31;
        if(i==6)
        m=m+30;
        if(i==7)
        m=m+31;
        if(i==8)
        m=m+31;
        if(i==9)
        m=m+30;
        if(i==10)
        m=m+31;
        if(i==11)
        m=m+30;
        if(i==12)
        m=m+31;
    }
    return m;
}
int main()
{
    int y,mon,d,a;
    scanf("%d%d%d",&y,&mon,&d);
    if(y%4!=0||(y%100==0&&y%400!=0))
    {
        a=f1(mon)+d;
        printf("%d",a);
    }
    else
    {
        a=f2(mon)+d;
        printf("%d",a);
    }
    getchar();
    getchar();
}