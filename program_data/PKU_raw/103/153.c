main()
{
      char a[1000];
      scanf("%s",a);
      int i;
      for(i=0;a[i]!='\0';i++)
      {
        if('a'<=a[i]&&a[i]<='z')
        a[i]=a[i]+'A'-'a';
      }
      for(i=0;a[i]!='\0';i++)
      {
        int b=0;
        while(a[i+1]==a[i])
        {
          b=1+b;
          i=i+1;
          }
        printf("(%c,%d)",a[i],b+1);
      }
}        
        

