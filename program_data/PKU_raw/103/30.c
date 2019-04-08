main()
{
      int l,i,p=0;
      char s[1010],c;
      scanf("%s",s);
      l=strlen(s);
      if((s[0]>='a')&&(s[0]<='z'))
      c=s[0]-'a'+'A';
      else
      c=s[0];
      for(i=0;i<=l;i++)
      {
          if((s[i]!=c)&&((s[i]-'a'+'A')!=c))
          {
                     printf("(%c,%d)",c,p);
                     p=0;
                     if((s[i]>='a')&&(s[i]<='z'))
                     c=s[i]-'a'+'A';
                     else
                     c=s[i]; 
          }
          p++;
      }
      getchar();getchar();
}