main()
{
      int i,n,y,m1,m2;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       scanf("%d %d %d",&y,&m1,&m2);
                       int t=0,m,d[50],a[5000];
                       if(y%4==0)
                       {
                                 if(y%100!=0)//???
                                 a[y]=1;
                                 else
                                 {
                                     if(y%400==0)
                                     a[y]=1;//??? 
                                     else
                                     a[y]=0;//????
                                 } 
                       }
                       else 
                       a[y]=0;         //???? 
                       
                       if(a[y]==1)
                       {
                             if(m1>m2)
                             for(m=m2;m<m1;m++)
                             {                 
                                               if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                                               d[m]=31;
                                               else if(m==2)
                                               d[m]=29;
                                               else
                                               d[m]=30;
                                               t=d[m]+t;
                             }
                             else
                             for(m=m1;m<m2;m++)
                             {                 
                                               if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                                               d[m]=31;
                                               else if(m==2)
                                               d[m]=29;
                                               else
                                               d[m]=30;
                                               t=d[m]+t;
                             }     
                       }
                       else
                       {
                           if(m1>m2)
                             for(m=m2;m<m1;m++)
                             {                 
                                               if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                                               d[m]=31;
                                               else if(m==2)
                                               d[m]=28;
                                               else
                                               d[m]=30;
                                               t=d[m]+t;
                             }
                             else
                             for(m=m1;m<m2;m++)
                             {                 
                                               if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                                               d[m]=31;
                                               else if(m==2)
                                               d[m]=28;
                                               else
                                               d[m]=30;
                                               t=d[m]+t;
                             }     
                       }
                       if(t%7==0)
                       printf("YES\n");
                       else
                       printf("NO\n");
      }
      getchar();
      getchar();
      getchar();
}
