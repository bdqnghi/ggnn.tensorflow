main()
{
      char a[256],b[256],c[256];
      gets(a);
      gets(b);
      gets(c);
      int n=0,q=0;
      for(int i=0;b[i]!='\0';i++)
      {
              n++;
              }
      for(int i=0;a[i]!='\0';i++)
      {
              q++;
              }
      int i,j,k,p;
      for(i=0;a[i]!='\0';i++)
      {
              int m=0;
              for(j=0;j<n;j++)
              {
                      if(a[i+j]==b[j])
                      m++;
                      }
                      if(m==n)
                      break;
                      }
      if(i==q)
      for(p=0;a[p]!='\0';p++)
      {
      printf("%c",a[p]);
      }
      else
      {
      for(k=0;c[k]!='\0';k++)
      {
                        a[k+i]=c[k];
                        }
      for(p=0;a[p]!='\0';p++)
      {
              printf("%c",a[p]);
              }
              }
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              getchar();
              }