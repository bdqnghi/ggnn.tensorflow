int main()
{
int a[20],n,m,i,j,s,s0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&m);
  for(j=0;j<m;j++)
    {
      scanf("%d",&a[j]);
    }
  s=60;
  s0=60;
  for(j=0;j<m;j++)
    { s0-=3;
      if(s0-a[j]>0)
      s-=3;
      if(s0-a[j]>=-3&&s0-a[j]<=0)
      s-=3+s0-a[j];
    }
  printf("%d\n",s);
}
return 0;
}