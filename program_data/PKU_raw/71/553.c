
main()
{
      int i,j,k=0,n,m,a,b,c;
      int pm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},rm[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
k=0;
                       scanf("%d %d %d",&a,&b,&c);
                       if(c<b)
                       {
                              m=c;
                              c=b;
                              b=m;
                              }
                              
                       if((a%4==0&&a%100!=0)||(a%4==0&&a%400==0))
                       { 
                                        for(j=b;j<c;j++)
                                        k=k+rm[j];
                                        if(k%7==0)
                                        printf("YES\n");
                                        else
                                        printf("NO\n");   
                                 
                                           }
                      
                       if(a%4!=0||(a%4==0&&a%100==0&&a%400!=0))
                       {
                             for(j=b;j<c;j++)
                             k=k+pm[j];
                             if(k%7==0)
                                        printf("YES\n");
                                        else
                                        printf("NO\n"); 
                                                          
                       }
      
      }
      
      }
