main()
{
      char a[1001];
      int l,i,sum=1;
      scanf("%s",a);
      l=strlen(a);
      a[l]=' ';
      for(i=0;i<l;i++)
      {
                      if(a[i]<='z'&&a[i]>='a')
                      a[i]=a[i]-'a'+'A';
      }
      for(i=0;i<l;i++)
      {
                      if(a[i]==a[i+1])
                      sum=sum+1;
                      else
                      {
                          printf("(%c,%d)",a[i],sum);
                          sum=1;
                      }
      }
      getchar();
      getchar();
}
