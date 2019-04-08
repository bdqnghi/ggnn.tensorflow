int ch(int y,int m)
{
 int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i,c;
if ((y%4==0&&y%100!=0)||(y%400==0))
     a[2]++;
     c=1;
     for(i=1;i<m;i++)
     c=c+a[i];
     return c;
}
main()
{

    int i,j,n,y,m1,m2,t,s=1;
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {
        scanf("%d %d %d",&y,&m1,&m2);
        if (m1>m2)
        s=ch(y,m1)-ch(y,m2);
        else
        s=ch(y,m2)-ch(y,m1);
        if (s%7!=0)
        printf("NO\n");
        else
        printf("YES\n");
        s=1;
    }
}
