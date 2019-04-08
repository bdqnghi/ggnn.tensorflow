
int year(int y)
{
    int r;
    if((y%4==0&&y%100!=0)||y%400==0)
        r=1;
    else
        r=0;
    return(r);
}
main()
{
    int n,i,j,day,t;
    int ye,m1,m2;
    int days[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        day=0;
        scanf("%d%d%d",&ye,&m1,&m2);
        if(m1>m2)
        {
            t=m1;
            m1=m2;
            m2=t;
        }
        if(year(ye)==1)
        {
            for(j=m1-1;j<m2-1;j++)
                day=day+days[1][j];
        }
        else
            for(j=m1-1;j<m2-1;j++)
                day=day+days[0][j];   
        if(day%7==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
} 
