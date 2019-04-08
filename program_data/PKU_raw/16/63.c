main()
{
  char a[6];
  gets(a);
  int i,j;
  j=strlen(a);
  for(i=j-1;i>=0;i--)
  printf("%c",a[i]) ;
  getchar();
  getchar();    
}
