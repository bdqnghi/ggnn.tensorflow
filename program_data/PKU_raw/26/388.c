main()
{
      char str[10000]; 
      gets(str);
      int lenth,count=0;
      lenth=strlen(str);
      for(int i=0;i<lenth;i++)
      {
                          if(str[i]==' ')
                          count++;
                          else count=0;
                          if(count<2)
                          printf("%c",str[i]);
      }
      getchar();
      getchar();
      return 0;
}
      
      
