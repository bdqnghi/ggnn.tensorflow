main()
{
      int n,j;
      char a[100],c[100],f[100];
      int b[100];
      gets(a);
      n=strlen(a);
      for(j=0;j<n;j++)
      b[j]=a[j]-'0';
      int x;
      x=b[0]*10+b[1];
      if((n==2&&x>=13)||n>=3)
      {
                     int d,e;
      e=0;
      for(j=0;j<n;j++)
      {
                      d=e*10+b[j];
                      e=d%13;
                      c[j]=d/13+'0';
                      }
                      c[n]='\0';
      int i,k;
      k=0;
      for(i=0;i<n;i++)
      {
                      if(c[i]!='0'||i>=2)
                      {
                                 f[k]=c[i];
                                 k++;
                                 }
                                 f[k]='\0';
                      }
                      puts(f);
                      printf("%d",e);
                      }
      if(n==2&x<13) 
      {
                    printf("0\n");printf("%d",x);
                    }
      if(n==1)
      {
              printf("0\n");printf("%d",b[0]);
              }
      
      getchar();getchar();getchar();getchar();getchar();getchar();
      }
