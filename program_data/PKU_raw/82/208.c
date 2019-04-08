int main()
{
  int n,k,sum=0,a,b,max=0;
  int i,result=0;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
      scanf("%d %d",&a,&b);
      if (a>=90 && a<=140 && b>=60 && b<=90)
                 sum++;
                 else {
                      if (sum>max) max=sum;
                      sum=0;
}   
}          
if (sum>max) max=sum;
 printf("%d",max);
  return 0;
}
