void x(char*p1,char*p2,int n);
int main()
{
  int n;
  char *p3;
  char *p4;
  char a[200];
  char b[200];
  p3=a;
  p4=b;
  gets(a);
  n=strlen(a);
  x(p3,p4,n);
  *(p4+n)='\0';
  printf("%s",b);
  return 0;
}

void x(char *p1,char *p2,int n)
{
 int i,a,b,c;
 for(i=1;i<=n-1;i++)
{
  a=*(p1+i-1);
  b=*(p1+i);
  c=a+b;
  *(p2+i-1)=c;
 }
  a=*(p1+n-1);
  b=*(p1);
  c=a+b;
*(p2+n-1)=c;
 }