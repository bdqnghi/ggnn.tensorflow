
int main()
{
  int n,i,m,j,ans,t,tmp;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    scanf("%d",&m);
    t=0;
    ans=60;
    for (j=1;j<=m;j++)
    {
       scanf("%d",&tmp);
       if (tmp+t<=60)
       {
          t+=3;
          if (tmp+t>60)
            ans-=63-tmp-t;
          else
            ans-=3;
       }
    }
    printf("%d\n",ans);
  }
}