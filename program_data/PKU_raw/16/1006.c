main()
{
      char a[10],b[10];
      gets(a);
      int i,l;
      l=strlen(a);
      for (i=0;i<l;i++)
      {
          b[l-i-1]=a[i];
      }
      b[l]='\0';
      puts(b);
      getchar();
      getchar();
}