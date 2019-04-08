main()
{
      int l,i,k;
      char a[10000],b[10000];
      gets(a);
      l=strlen(a);
      b[0]=a[0];
      for(i=1,k=1;i<l;i++)
      {
                      if(a[i]==' '&&a[i-1]==' ')
                      {}
                      else
                      {b[k]=a[i];k++;}
      }
      puts(b);
      getchar();
      getchar();
}
