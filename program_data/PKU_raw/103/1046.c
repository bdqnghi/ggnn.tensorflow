
char f[1];
main()
{
      char s[1000];
      scanf("%s",s);
      int p=0;
      int k,n,t=0;
      n=strlen(s);
      s[n]='a';
      if(s[0]>='a'&&s[0]<='z')
      f[0]=s[0]+'A'-'a';
      else
      f[0]=s[0];
      for(k=1;k<=n;k++)
      {
                       if(s[k-1]>='a'&&s[k-1]<='z')
                       s[k-1]=s[k-1]+'A'-'a';
                       if(s[k-1]!=s[p])
                       {
                                       printf("(%s,%d)",f,t);
                                       f[0]=s[k-1];
                                       p=k-1;
                                       t=1;
                       }
                       else t++;
                       if(k==n)
                       printf("(%s,%d)",f,t);
                       
      }
     }
