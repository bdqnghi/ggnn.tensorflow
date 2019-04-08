int main()
{
  int n;
  double a,b;
  double x,y;
  scanf("%d",&n);
  scanf("%lf%lf",&a,&b);
  while(--n)
  {
    scanf("%lf%lf",&x,&y);          
    if(b/a-y/x>0.05) printf("worse\n");
    else if(b/a-y/x<-0.05) printf("better\n");
         else printf("same\n");
  }
 return 0;    
}
