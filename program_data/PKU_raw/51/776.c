
main()
{
      int n,i,m,sun=0,flag=0,aa=0,mm=1;
      char a[510];
      int b[510],d[510],p=0,j,pp,jj,ii,k;
      scanf("%d%s",&n,a);
      for(i=0;i<510;i++)
      b[i]=0;
      for(i=0;i<510;i++)
      d[i]=0;
      for(i=0;a[i]!=0;i++)
      {p++;}
      m=p-n+1;
      if(m<1)
      printf("NO\n");
      else{
                          for(i=0;i<m;i++)
                          {
                           for(j=0;j<n;j++)
                           {
                                           b[i]=b[i]+a[i+j]*mm;
                                            mm=mm*43;}
                                             mm=1;}
                           
                           for(i=0;i<m-1;i++)
                           {
                                           for(j=i+1;j<m;j++)
                                           {if(b[i]!=b[j])
                                           sun++;}}
                         
                         
                         
                         
                          if(sun==m*(m-1)/2)
                                           printf("NO\n");
         else
                                           {
                                                      for(i=0;i<m;i++)
                                                      {
                                                                      for(pp=0;pp<i;pp++)
                                                      {
                                                        if(b[pp]==b[i])
                                                       {flag=1;break;}
                                                       else
                                                        flag=0;}
                                                         if(flag!=0)
                                                         continue;
                                    
                                                         for(j=0;j<m;j++)
                                                         {
                                                         if(b[i]==b[j])
                                                         d[i]++;}
                                                         
                                                         }
                                                         
                                                         
                                                         for(i=0;i<m;i++)
                                                         { for(j=0;j<m;j++)                         
                                                         {
                                                          if(d[i]>=d[j])
                                                           aa++;}
                                                                                                    if(aa==m)
                                                                                                    {printf("%d\n",d[i]);
                                                                                                    for(ii=0;ii<n;ii++)
                                                                                                    printf("%c",a[i+ii]);printf("\n");
                                                         break;}
                                                         aa=0;}
                                    
                                    
                                    
                                    for(k=i+1;k<m;k++)
                                    {if(d[i]==d[k])
                                    {
                                    for(jj=0;jj<n;jj++)
                                    printf("%c",a[k+jj]);
                                    printf("\n");}}}}
                                   
                                    }
                               
