main()
{
  int i,n,sum=0;
  char a[10000];
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  { 
    if(a[i]!=' ')
    {
      sum=sum+1;
      continue;
    }
    else if(a[i]==' '&&a[i-1]!=' ')
    {
      printf("%d,",sum); 
      sum=0;
    }
    else continue;
  }
  printf("%d",sum);
}