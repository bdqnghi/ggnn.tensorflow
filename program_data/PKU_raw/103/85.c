main()
{
      int l,i,j=0,c[26]={0};
      char a[10000],b[10000];
      scanf("%s",a);
      l=strlen(a);
      if(a[0]>='a'&&a[0]<='z')
      a[0]=a[0]+'A'-'a';
      b[0]=a[0];
      c[0]=1;
      for(i=1;i<l;i++)
      {
                      if(a[i]>='a'&&a[i]<='z')
                      a[i]=a[i]+'A'-'a';
                      if(a[i]==a[i-1])
                      c[j]=c[j]+1;
                      else
                      {
                              printf("(%c,%d)",b[j],c[j]);
                              j=j+1;
                              b[j]=a[i];
                              c[j]=1;
                      }
      }
      printf("(%c,%d)",b[j],c[j]);
      getchar();
      getchar();
}
