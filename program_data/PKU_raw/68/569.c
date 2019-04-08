void main()
{
     long int m,n,a,b,i,j,s;
     double t;
     scanf("%ld",&n);
     for(m=6;m<=n;m+=2)
     {
                       for(a=3;a<m;a+=2)
                       {
                                        s=1;
                                        t=sqrt(a);
                                        for(i=3;i<=t;i++)
                                        {
                                                               if((a%i)==0)
                                                               {
                                                               s=0;
                                                               break;
                                                               }
                                                               }
                                                               if(s==1)
                                                               {
                                                                       b=m-a;
                                                                       t=sqrt(b);
                                                                       for(j=3;j<=t;j++)
                                                                       {
                                                                                              if((b%j)==0)
                                                                                              {
                                                                                              s=0;
                                                                                              break;
                                                                                              }
                                                                                              }
                                                                                              }
                                                                                              if(s==1)
                                                                                              {
                                                                                                      printf("%ld=%ld+%ld\n",m,a,b);
                                                                                                      break;
                                                                                                      }
                                                                                                      }
                                                                                                      }
                                                                               
                                                                                                      }
