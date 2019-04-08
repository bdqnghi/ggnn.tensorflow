main()
{
      int t,i,b,j,k,m;
      m=0;
      char a[100001];
      scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
          scanf("%s",a);
          b=strlen(a);
          for(j=0;j<=b-1;j++)
           {
                            
                for(k=0;k<=b-1;k++)
                  {
                      if(a[j]!=a[k])
                      m=m+1;
                      
                      //if(a[j]==a[j+k+1])
                      //break;
                  }
                  //printf("%d ",m);
                if(m==b-1&&i!=t)
                  {
                     printf("%c\n",a[j]);
                     break;
                  }
                else if (m==b-1&&i==t)
                  {
                     printf("%c",a[j]);
                     break;
                  }
                  m=0;
                
               /* else if(j==b-1&&i!=t)
                printf("%c\n",a[b-1]);
                else if(j==b-1&&i==t)
                printf("%c",a[b-1]);*/
                
           }
           if(j==b&&i!=t)
           printf("no\n");
           if(j==b&&i==t)
           printf("no");
           m=0;
      }
      }             