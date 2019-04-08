void main()
{
  int a[300],out[300],n,r=0,i,*p,*q;
  scanf("%d",&n);
  for(i=1;i<=n;i++) scanf("%d",&a[i-1]);
  for(p=a;p<a+n;p++)
  {
    for(q=p+1;q<a+n;q++) {if(*q==*p) *q=0;}
    if(*p!=0) {out[r]=*p; r++;}
  }
  for(p=out;p<out+r-1;p++) printf("%d,",*p);
  printf("%d",out[r-1]);
}
    
    