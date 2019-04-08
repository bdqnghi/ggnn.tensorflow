int b[5],m=0;
int f(int n)
{
 int c;
 if(n==0) return (0);
 else
 {
  b[m]=n%10;
  m++;
  c=n/10;
  return f(c);}
}
void main()
{
 int n,i;
 scanf("%d",&n);
 f(n);
 for(i=0;i<m;i++)
 printf("%d",b[i]);
}