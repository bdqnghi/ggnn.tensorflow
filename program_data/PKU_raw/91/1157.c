


int main(int argc, char *argv[])
{
  char a[1000];
  int i;
  gets(a);
  int b=a[0];
  for (i=0;i<=strlen(a)-2;i++)
  {
      a[i]=a[i]+a[i+1];
  }
  a[strlen(a)-1]=a[strlen(a)-1]+b;
  for (i=0;i<=strlen(a)-1;i++)
      printf("%c",a[i]);
  return 0;
}
