void main()
{
  int huiwen(int x);
  int sushu(int x);
  int m,n,x,p,q,i,j,c[1000];
  scanf("%d %d",&m,&n);
  i=0;
  for (x=m;x<=n;x++)
  {
    p=huiwen(x);
    q=sushu(x);
    if (p==1&&q==1)
    {
      c[i]=x;
      i++;
    }
  }
  if (i==0)
    printf("no\n");
  else
  {
    for (j=0;j<i;j++)
    {
      if (j!=i-1)
        printf("%d,",c[j]);
      else
        printf("%d\n",c[j]);
    }
  }
}
int huiwen(int x)
{
  int s,t,k,a[10],b[10],y;
  for (s=0;x!=0;s++)
  {
    a[s]=x;
    x=(int)(x/10);
  }
  a[s]=0;
  for (t=0;t<s;t++)
  {
    b[t]=a[t]-a[t+1]*10;
  }
  y=0;
  for (t=0;t<s;t++)
  {
    if (b[t]==b[s-1-t])
      y++;
  }
  if (y==s)
    return(1);
  else
    return(0);
}
int sushu(int x)
{
  int u,v;
  v=0;
  for (u=1;u<=x;u++)
  {
    if (x%u==0)
      v++;
  }
  if (v==2)
    return(1);
  else
    return(0);
}

