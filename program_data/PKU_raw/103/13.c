
main()
{
      char s[100000];
      scanf("%s",s);
      int i,a[strlen(s)],c;
      for (i=0;i<strlen(s);i++)
      a[i]=0;
      a[0]=1;
      c=0;
      char b[strlen(s)];
      for (i=0;i<strlen(s);i++)
      b[i]='\0';
      b[0]=s[0];
      for (i=1;i<strlen(s);i++)
      {
          if (s[i]==s[i-1]||s[i]-s[i-1]=='a'-'A'||s[i-1]-s[i]=='a'-'A')
          {
                           a[c]++;
          }
          else 
          {
               c++;
               a[c]++;
               b[c]=s[i];
          }
      }
      for (i=0;i<=c;i++)
      if(b[i]>='a'&&b[i]<='z')
      b[i]=b[i]+'A'-'a';
      for (i=0;i<=c;i++)
      printf("(%c,%d)",b[i],a[i]);      

}
