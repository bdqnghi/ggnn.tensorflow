
main()
{
      char str[1000];
      gets(str);
      int i,k;
      for(i=0;str[i]!='\0';i=i+1)
      {
      if(str[i]>='a')
      str[i]=str[i]-32;
      }
     
      i=0;
      k=1;
      for(;str[i]!='\0';)
      {
      if(str[i]==str[i+1])
      {
      k=k+1;
      i=i+1;
      }
      else
      {
      printf("(%c,%d)",str[i],k);
      i=i+1;
      k=1;
      }
      
      
      }

}
