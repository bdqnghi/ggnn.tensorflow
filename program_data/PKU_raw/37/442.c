main()
{
      int t,i,j,n;
      char c[1];
      gets(c);
      t=atoi(c);
      char a[2][100000];
      int b[26];
      for(i=0;i<t;i++)
      {
                      gets(a[0]);
                      n=strlen(a[0]);
                      for(j=0;j<26;j++)
                      b[j]=0;
                      for(j=0;j<n;j++)
                      {
                                      int k;
                                      k=a[0][j]-'a';
                                      b[k]++;
                                      }
                      for(j=0;j<n;j++)
                      {
                                      if(b[a[0][j]-'a']==1) break;
                                      }
                                      if(j==n) printf("no\n");
                                      else printf("%c\n",a[0][j]);
                      }
      
      getchar(); getchar(); getchar(); getchar(); getchar();
      } 

