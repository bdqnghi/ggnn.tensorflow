main()
{
      char a[100];
      gets(a);
      for (int i=0;a[i]!='\0';i++)
      {
          if(a[i]==' ' && a[i-1]==' '); 
          else
          printf("%c",a[i]);
      }
}
