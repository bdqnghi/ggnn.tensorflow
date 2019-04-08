int f(int n, int m)
{
  if (n == 1)
  {
    return 1;
  }
  else
	  return (f(n - 1, m) + m - 1) % n + 1;
}
int main()
{
	int i,m, n,a[20000]={0},c=0;
  for(i=1;i<20000;i++)
  {
	  scanf("%d %d",&n,&m);
	  if(n!=0&&m!=0)
	  {
		   a[i]=f(n,m);
		   c++;
	  }
	  else
		  break;
  }
  for(i=1;i<=c;i++)
  {
	  printf("%d\n",a[i]);
  }
  return 0;
}
