int main()
{
  char a[100];
  int i;
  gets(a);
  int m=strlen(a);
  for(i=0;i<m;i++)
  {
    if(a[i]==' '&&a[i+1]==' ')
    printf("");
    else  printf("%c",a[i]);

  }
  return 0;
}
