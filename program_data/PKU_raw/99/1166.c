int main(){
  double n,i,a,b,c,d,e;
  i=1;
  a=0;
  b=0;
  c=0;
  d=0;
  scanf("%lf",&n);
  while(i<=n){
  i=i+1;
  scanf("%lf",&e);
  if(e<=18){
  a=a+1;
  }else if(e<=35){
  b=b+1;
  }else if(e<=60){
  c=c+1;
  }else{
  d=d+1;}
  }
  a=100*a/n;
  b=100*b/n;
  c=100*c/n;
  d=100*d/n;
  printf("1-18: %.2lf",a);
  printf("%%\n");
  printf("19-35: %.2lf",b);
  printf("%%\n");
  printf("36-60: %.2lf",c);
  printf("%%\n");
  printf("60??: %.2lf",d);
  printf("%%\n");
  return 0;
}