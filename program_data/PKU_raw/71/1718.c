main()
{
    int n;
    scanf("%d",&n);
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int v=0;v<n;v++)
    {
        int y,m1,m2;
        scanf("%d %d %d",&y,&m1,&m2);
        if(m1>m2)
        {
           int t=m1;
           m1=m2;
           m2=t;      
        }
        if(((y%4==0)&&(y%100!=0))||(y%400==0)) month[2]=29;
        int mp,sum=0;
        for(mp=m1;mp<m2;mp++) 
           sum=sum+month[mp];
        if (sum%7==0) printf("YES\n");
        else printf("NO\n");
        month[2]=28;
    }
    getchar();
    getchar();
}