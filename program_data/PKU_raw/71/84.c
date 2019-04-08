int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int y,m1,m2,m=0,j,sum=0;
        scanf("%d%d%d",&y,&m1,&m2);
        if(m1>m2)
        {
            m=m1;
            m1=m2;
            m2=m;
        }                    
        
        if((y%4==0&&y%100!=0)||(y%400==0))
        {
            int mon[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
            for(j=m1;j<=m2-1;j++)
            {
                sum=sum+mon[j];
            }
            if(sum%7==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else if((y%4!=0)||(y%100==0&&y%400!=0))
        {
            int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
            for(j=m1;j<=m2-1;j++)
            {
                sum=sum+mon[j];
            }
            if(sum%7==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    //int a;
    //scanf("%d",&a);
    //printf("%d",a);
    return 0;
}
