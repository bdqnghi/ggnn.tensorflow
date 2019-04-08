int main()
{
  int i,k,t,x,a[20000],n,m,l;
  l=0;
  m=0;
  scanf("%d",&n);
  for(k=1;k<=n;k++)
  {
    scanf("%d",&x);
    
	for(i=1;i<=m+1;i++)
		if(x==a[i-1])l=1;
    if(l==0)
	{
       a[m]=x;
       m=m+1;
	}
	l=0;
   }
   printf("%d",a[0]);
   for(t=1;t<=m-1;t++)
    printf(" %d",a[t]);
   printf("\n");
   return 0;
}