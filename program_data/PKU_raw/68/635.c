int main()
{
  int f(int n);
  int n,i,j;
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
    for(j=3;j<i;j++)
	{
	  if(f(j)==1&&f(i-j)==1)
	  {
	  printf("%d=%d+%d\n",i,j,i-j);
	  break;
	  }
	}
  }
return 0;
}
int f(int n)
{
  int i,a=sqrt(n),c;
  for(i=2;i<=a;i++)
  
    if(n%i==0) break;
	if(i>a) c=1;
    else c=0;
  return(c);
}