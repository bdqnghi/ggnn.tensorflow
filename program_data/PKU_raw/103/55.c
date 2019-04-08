void ch(char a[1000])
{
      int i;
      for(i=0;i<1000;i++)
      {
                         if(a[i]>='a'&&a[i]<='z')
                         a[i]='A'-'a'+a[i];
                         else if(a[i]==0)
                         break;
      }
}
main()
{
      char a[1000];
      int i,j,k=1,l;
      scanf("%s",a);
      l=strlen(a);
      ch(a);
      for(i=0;i<l;i++)
      {
                      if(a[i]==a[i+1])
                      k++;
                      else 
                      {
                           printf("(%c,%d)",a[i],k);
                           k=1;
                      }
      }
      getchar();
      getchar();
}
