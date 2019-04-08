void main()
{
  int n,x=0;
  long i,j,a,b,c,d,e,f,s;
  scanf("%d",&n);
  a=b=0;
  c=d=e=255;
  for(i=1;i<=n*n;i++)
  {
    scanf("%d",&c);
    if(c==0)
    {
      a=i;
      break;
    }
  }
  for(j=i+1;j<=n*n;j++)
  {
    c=d;
    d=e;
    e=f;
    scanf("%d",&f);
    if((f!=0)&&(c==0)&&(d==0)&&(e==0))
    {
      b=j-1;
    }
  }
  int o,p,q,r;
  o=a%n;
  p=(-b+1)%n+n;
  q=a/n;
  r=b/n;
  s=(n-o-p)*(r-q-1);
  printf("%d\n",s);
}    
