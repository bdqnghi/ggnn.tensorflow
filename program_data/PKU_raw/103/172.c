main()
{
      char  a[1001];
      int i,n;
      gets(a);
      for(i=0;a[i]!='\0';i++)
      {
                             if(a[i]>='a'&&a[i]<='z')
                             a[i]=a[i]-'a'+'A';
      }
      for(i=0;a[i]!='\0';)
      {
                       n=0;
                       while(a[i+1]==a[i])
                       {
                                          n++;
                                          i++;
                       }
                       n++;
                       printf("(%c,%d)",a[i],n);
                       i++;
      }
}                
