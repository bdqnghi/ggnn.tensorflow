 int main()
{
 int n,i,c=0,y=0,a=0,o=0;
 int sum[100];
 double cl,yl,al,ol;
 scanf("%d\n",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%d ",&sum[i-1]);
     if(sum[i-1]<=18)
         c=c+1;
     else if(sum[i-1]<=35)
         y=y+1;
     else if(sum[i-1]<=60)
         a=a+1;
     else  o=o+1;

 }
  cl=c*1.0*100/n;
  yl=y*1.0*100/n;
  al=a*1.0*100/n;
  ol=o*1.0*100/n;
  printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%",cl,yl,al,ol);
  return 0;
}