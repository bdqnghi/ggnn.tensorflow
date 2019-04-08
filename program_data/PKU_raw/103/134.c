main()
{
      char str[101];
      gets(str);
      int i=0,n=1;
      for(i;str[i]!='\0';i++)
      {
             if(str[i]>='a'&&str[i]<='z') str[i]+='A'-'a';
      }
      for(i=0;str[i]!='\0';i++)
      {
             if(str[i]==str[i+1]) n++;
             else {
                  printf("(%c,%d)",str[i],n);
                  n=1;
                  }
      }
      getchar();
}