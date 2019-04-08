main()
{
      int n,r,i;
      char s[501];
      char a[500][6];
      int b[500];
      for(i=0;i<500;i++)
      b[i]=1;
      scanf("%d",&n);
      scanf("%s",s);
      int x,j;
      int k=-1;
      x=strlen(s);
      for(i=0;i<=x-n;i++)
      {
                   k++;      
                  for(j=i;j<i+n;j++)
                    a[k][j-i]=s[j];
      }     
         for(i=0;i<k;i++)
         {
                         x=strlen(a[i]);
                         if(x>n)
                         continue;
                      for(j=i+1;j<=k;j++)
                      {
                                      for(r=0;r<n;r++)
                                      {
                                                      if(a[i][r]!=a[j][r])
                                                      break;
                                      }
                                      if(r==n)
                                      {
                                      b[i]++;
                                      a[j][n]='0';
                                      }
                      }
         }
          int p;
          p=b[0];
          for(i=1;i<=k;i++)
          {
                           if(b[i]>p)
                           p=b[i];
          }        
          if(p==1)
          printf("NO");
          else
          {
              printf("%d\n",p);
              for(i=0;i<=k;i++)
              {
                               if(b[i]==p)
                               printf("%s\n",a[i]);
              }
          }
          
                                 
      
      
}
