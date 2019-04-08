main()
{
      int n,m,i,k;
      int s=0;
      int r=0;
      int q=0;
      scanf("%d",&n);
      m=2*n*(n-1);
      int *p=(int *)malloc(m*sizeof(int));
       int *a=(int *)malloc(n*sizeof(int));
       for(i=0;;i=i+2)
       {
                      scanf("%d %d",&p[i],&p[i+1]);
                      if(p[i]==0&&p[i+1]==0)
                      break;
                      else
                      s++;
                      }
                      for(i=0;i<n;i++)
                      a[i]=0;
                      for(i=1;i<=(2*s-1);i=i+2)
                      a[p[i]]++;
                      for(i=0;i<n;i++)
                      {
                                     if(a[i]==(n-1))
                                     {
                                                    r=1;
                                                    for(k=0;k<=(2*s-2);k=k+2)
                                                    {
                                                                             if(p[k]==i)
                                                                             q=1;
                                                                             }
                                                                             if(q==0)
                                                                             printf("%d",i);
                                                                             else
                                                                             printf("NOT FOUND");
                                                                             break;
                                                                             }
                                                                             }
                                                                             if(r==0)
                                                                             printf("NOT FOUND");
                                                                             
                                                                             }
