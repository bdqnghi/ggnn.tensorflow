void f(char a[],int i,int n)
{
  for(i=0;i<n;i++)
  {
    if(a[i]<='Z')
      a[i]=a[i]+'a'-'A';
  }
}
int main()
{
  char a[100],b[100];
  int c,d,i;
  gets(a);
  gets(b);
  c=strlen(a);
  d=strlen(b);
  f(a,i,c);
  f(b,i,d);
  if(strcmp(a,b)==0) printf("=");
  else if(strcmp(a,b)>0) printf(">");
  else printf("<");
  return 0;
}
