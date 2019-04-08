main()
{
      char a[501],b[500][5];
      int n,i,j,k,t,p,q=0,s,c[500]={0};
      scanf("%d",&n);
      scanf("%s",a);
      k=strlen(a);
      s=0;
      for(i=0;i<=k-n;i++)
      {
      t=0;
                       for(j=i;j<=n+i-1;j++)
                       {
                                            b[i][t]=a[j];
                                            t++;
                                            }
                                            }
      c[0]=1;
      for(i=1;i<=k-n;i++)
      {
                         for(j=0;j<=i;j++)
                         {
                                            if(strcmp(b[i],b[j])==0)
                                            {
                                            c[j]++;
                                            break;
                                            }
                                            }
                                            }
      for(i=0;i<=k-n;i++)
      {
                         if(c[i]>s)
                         s=c[i];
                        } 
                        if(s==1)
                         {
                       printf("NO\n");
                       goto loop;
                       }
      printf("%d\n",s);    
      for(i=0;i<=k-n;i++)
      {
                         if(c[i]==s)
                         printf("%s\n",b[i]);
                         }
      loop:;

      }
