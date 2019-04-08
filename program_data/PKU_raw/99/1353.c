int main()
{
  int n,i,a,b=0,c=0,d=0,e=0;
  double f=0,g=0,h=0,j=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&a);
  if(1<=a && a<=18)
     b++;
  if(19<=a && a<=35)
	 c++;
  if(36<=a && a<=60)
     d++;
 if(60<a)
	 e++; 
  }
  f=(double)b/n;
  g=(double)c/n;
  h=(double)d/n;
  j=(double)e/n;
  printf("1-18: %.2lf%%\n",f*100);
  printf("19-35: %.2lf%%\n",g*100);
  printf("36-60: %.2lf%%\n",h*100);
  printf("60??: %.2lf%%\n",j*100);
  return 0;
}