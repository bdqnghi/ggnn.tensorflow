int main()
{
  double n,x,y;
  double a,b;
  double m,p,q,h;
  scanf("%lf",&n);
  scanf("%lf %lf",&x,&y);
  m=y/x;
  int i=2;
  while(i<=n){
    scanf("%lf %lf",&a,&b);
    p=b/a;
    q=m-p;
    h=p-m;
    if(h>0.05){
      printf("better\n");
    }else if(q>0.05){
      printf("worse\n");
    }else{
      printf("same\n");
    }
    i++;
  }
  return 0;
}
  