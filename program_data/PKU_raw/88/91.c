main()
{
      char s[2000];
      gets(s);
      int i;
      for(i=0;s[i]!='\0';i++)
      {if(s[i]>=48&&s[i]<=57&&s[i+1]>=48&&s[i+1]<=57)
      printf("%c",s[i]);
      if(s[i]>=48&&s[i]<=57&&(s[i+1]<48||s[i+1]>57))
      printf("%c\n",s[i]);}
      getchar();
      getchar();
      return 0;
      }
