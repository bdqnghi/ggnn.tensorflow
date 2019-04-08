int main()
{
  int a,b,c,i,n,j,m;
  double x,y;
  scanf("%d%d %d",&n,&a,&b);
  x=1.0*b/a;
  for(i=1;i<=n-1;i++)
  {
   scanf("%d %d",&c,&j);
   y=1.0*j/c;
   if(x-y>=0.05) printf("worse\n");
   else if(y-x>=0.05) printf("better\n");
   else printf("same\n");}
   return 0;
}