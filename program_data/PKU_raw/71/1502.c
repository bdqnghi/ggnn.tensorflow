int runnian(int y)
{
     int t=0;
    if(y%400==0||y%4==0&&y%100!=0) t=1;
    return t;
}
int main()
{
    int i,j,n,y,m1,m2,t,days;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d %d",&y,&m1,&m2);
       days=0; 
      if(m1>m2)
       {t=m2;
        m2=m1;
        m1=t;
       }
         if(runnian(y)==1)
         {
           for(j=m1;j<m2;j++)
            {  if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                days+=31;
                if(j==2)
                days+=29;
                if(j==4||j==6||j==9||j==11)
                days+=30;
          }
         }
          if(runnian(y)==0)
         {
            for(j=m1;j<m2;j++)
          {
            if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
             days+=31;
             if(j==2)
             days+=28;
             if(j==4||j==6||j==9||j==11)
             days+=30;
           }
          }
          if(days%7==0)
          printf("YES\n");
          if(days%7!=0)
          printf("NO\n");
       }
       getchar();
       getchar();
       return 0;
}
