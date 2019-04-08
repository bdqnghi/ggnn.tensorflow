int main()
{
    int n,i,j,year,m1,m2;
    int day[13];
    int sum;
    int run(int x); 
    scanf("%d",&n);
    day[1]=31; 
    day[3]=31; 
    day[5]=31; 
    day[7]=31; 
    day[8]=31;
    day[10]=31; 
    day[12]=31; 
    day[4]=30; 
    day[6]=30; 
    day[9]=30; 
    day[11]=30;
    for (i=1;i<=n;i++)
        {
                      scanf("%d %d %d",&year,&m1,&m2);
                      if (run(year)==1)
                         day[2]=29;
                         else
                         day[2]=28;
                      sum=0;
                      if (m1>m2)
                         {
                                j=m1;
                                m1=m2;
                                m2=j;
                         }
                      for (j=m1;j<=m2-1;j++)
                          sum=sum+day[j];
                      if (sum%7==0)
                         printf("YES\n");
                         else
                         printf("NO\n");
        }
    
}
int run(int x)
{
    if (x%4!=0)
       return 0;
       else
       {
       if (x%100!=0)
          return 1;
          else
          {
          if (x%400==0)
             return 1;
             else return 0;
          }
       }
}
