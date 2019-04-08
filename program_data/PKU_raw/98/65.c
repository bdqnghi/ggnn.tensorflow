
int main(int argc, char *argv[])
{
  char a[50];
  int n,i,j,line,l;
  scanf("%d",&n);
  scanf("%s",a);
  printf("%s",a);
  line=strlen(a);
  for(i=2;i<=n;i++)
  {
      scanf("%s",a);
      line+=strlen(a)+1;
      if(line<=80)
      {
          printf(" %s",a);
      }
      else
      {
          printf("\n%s",a);
          line=strlen(a);
      }
  }

  return 0;
}