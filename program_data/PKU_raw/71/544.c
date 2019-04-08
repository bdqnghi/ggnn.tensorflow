main()
{
      int n,i,j;
      scanf("%d",&n);
      int a[n],b[n],c[n];
      for(i=0;i<n;i++)
      {
                      scanf("%d %d %d",&a[i],&b[i],&c[i]);
      }
      int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
       int p,q;
      int s;
      for(i=0;i<n;i++)
      {
                      if((a[i]%4==0&&a[i]%100!=0)||a[i]%400==0)
                      {
                                   d[1]=29;
                      }
                      
                      p=b[i];
                      q=c[i];
                      if(p>q)
                      {
                             int temp;
                             temp=p;
                             p=q;
                             q=temp;
                      }
                      int s=0;      
                      for(j=p;j<q;j++)
                      {
                                      s=d[j-1]+s;
                      }
                      if(s%7==0)
                      printf("YES\n");
                      else
                      printf("NO\n");
                      d[1]=28;
      }
     
}
