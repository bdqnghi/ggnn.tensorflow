int main()
{
  long a[300],n,m,x;
  for(;;)
  {
  for(x=0;x<300;x++)
  {
   a[x]=1;
  }
   scanf("%d %d",&n,&m);
   if(n==0) break;
   int i,t=0,j=0;
   for(i=0;i<=n-1;)
  {
  if(a[i]) t++;
  if(t==m)
  {
    a[i]=0;
   t=0;
   j++;
  }
  if(i==n-1) i=0;
  else i++;
  if(j==n-1) break;
  }
  for(i=0;i<=n-1;i++)
  {
  if(a[i]!=0) break;
  }
  printf("%d\n",i+1);
}
return 0;
}  