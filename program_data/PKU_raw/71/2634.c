main()
{
  int i,n,y,m1,m2;char year;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    int a[7]={1,3,5,7,8,10,12};
    int s=0;int t=0;
    scanf("%d %d %d",&y,&m1,&m2);
    if((y%4==0&&y%100!=0)||y%400==0) year='t';
    else year='f';
    if(year=='f')
    {
       if(m1>m2) 
       {
         for(int k=m2;k<m1;k++)
         {
            for(int j=0;j<7;j++) 
            {
              if(a[j]==k) t=1;
            }
            if(t==1) s=s+31;
              else if(k==2) s=s+28;
                   else s=s+30;
            t=0;
         }
       }
       else
       {
         for(int k=m1;k<m2;k++)
         {
            for(int j=0;j<7;j++) 
            {
              if(k==a[j]) t=1;
            }
            if(t==1) s=s+31;
              else if(k==2) s=s+28;
                   else s=s+30;
              t=0;
         }
       }
    }
    else
    {
       if(m1>m2) 
       {
         for(int k=m2;k<m1;k++)
         {
            for(int j=0;j<7;j++) 
            {
              if(a[j]==k) t=1;
            }
            if(t==1) s=s+31;
              else if(k==2) s=s+29;
                   else s=s+30;
                   t=0;
         }
       }
       else
       {
         for(int k=m1;k<m2;k++)
         {
           for(int j=0;j<7;j++) 
            {
              if(a[j]==k) t=1;
            }
            if(t==1) s=s+31;
              else if(k==2) s=s+29;
                   else s=s+30;
                   t=0;
         }
       }
    }
   if(s%7==0)    printf("YES\n");
   else  printf("NO\n");
  }
  getchar();
  getchar();
  getchar();
}
