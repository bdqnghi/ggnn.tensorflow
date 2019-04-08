int main()
{
      int n,year,m1,m2,i,j,b,day;
      scanf("%d",&n);
      int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //???;
      for(i=0;i<n;i++)
      {
          scanf("%d %d %d",&year,&m1,&m2);
          if (m1>m2)                                        //??m1<m2; 
          {
              b=m1;
              m1=m2;
              m2=b;
          }
          day=0;
          if ((year%4==0)&&(year%100!=0)||(year%400==0))    //????? 
          {
              days[1]++;
              for(j=m1-1;j<m2-1;j++) day=day+days[j];
              if (day%7==0) printf("YES\n");
              else printf("NO\n");
              days[1]=28;
          }
          else
          {
              for(j=m1-1;j<m2-1;j++) day=day+days[j];
              if (day%7==0) printf("YES\n");
              else printf("NO\n");
          }
      }

}
