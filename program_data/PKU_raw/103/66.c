main()
{
      char s[1000];
      int l,i,j=1;
      gets(s);
      l=strlen(s);
      for(i=0;i<l;i++)
      {
      if(s[i+1]==s[i]||s[i+1]==s[i]+32||s[i+1]==s[i]-32)
      j++;
      else
      {
          if(s[i]>='a'&&s[i]<='z')
          {printf("(%c,%d)",s[i]-32,j);
          j=1;}
          else
          {printf("(%c,%d)",s[i],j);
          j=1;}
      }
      }
      getchar();
      getchar();
      return 0;
      }
