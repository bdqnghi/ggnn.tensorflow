main()
{
      int n;
      char z[1];
      gets(z);
      n=atoi(z);   
      int i,j;
      char a[2][100000];
      for(i=0;i<n;i++)
      {
             gets(a[0]);
             int t;
             t=strlen(a[0]);
             if(a[0][0]-'_'==0 || (a[0][0]>='a' && a[0][0]<='z') || (a[0][0]>='A' && a[0][0]<='Z'))
             {
                       for(j=1;j<t;j++)
                       {
                             if(!( (a[0][j]>='a' && a[0][j]<='z') || (a[0][j]-'_'==0) || (a[0][j]>='0' && a[0][j]<='9') || (a[0][j]>='A' && a[0][j]<='Z') ))
                             break;
                        }
              if(j==t) printf("1\n");
              else printf("0\n");
              }
         else printf("0\n");
      }
      getchar();getchar();getchar();getchar();
      } 

