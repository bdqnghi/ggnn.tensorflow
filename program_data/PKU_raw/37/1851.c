 
main()
{
      int m,j;
      scanf("%d",&m);
      for(j=0;j<m;j++)
      {
      int n=0;
      char s[1000];
      scanf("%s",s);
      int l;
      int i;
      l=strlen(s);
      int b[1000]={0};
      for(i=0;i<l;i++)
      {
                      b[s[i]]++;
      }
      for(i=0;i<l;i++)
      {
                      if(b[s[i]]==1)
                      {
                                    printf("%c\n",s[i]);
                                     n=1;
                                    break;
                                   
                      } 
      }
      if(n==0)
      printf("no\n");
      }
      }
