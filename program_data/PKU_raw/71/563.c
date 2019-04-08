 
int year(int y)
{
    
    if(y%400==0) return 0;
    else if(y%4==0&&y%100!=0) return 0;
    else return 1;
}
main()
{
      int n;
      scanf("%d",&n);
      int i,j,k;
      int a[100];
         a[1]=31;
         a[3]=31;
         a[4]=30;
         a[5]=31;
         a[6]=30;
         a[7]=31;
         a[8]=31;
         a[9]=30;
         a[10]=31;
         a[11]=30;
         a[12]=31;
      int y,m1,m2;
      for(i=0;i<n;i++)
      {
                      int sum=0;
         scanf("%d %d %d",&y,&m1,&m2);
        
         if(year(y)==0) a[2]=29;
         else a[2]=28;
         if(m2<m1)
         { 
                  k=m1;
                  m1=m2;
                  m2=k;
         }
         for(j=m1;j<=m2-1;j++)
         {
               sum=sum+a[j];           
         }
         if(sum%7==0) printf("YES\n");
         else printf("NO\n");
         
      }
      }
