int main()
{
 int m;
 scanf("%d\n",&m);
 int i;
 int k;
 for(i=0;i<m;i++)
 {
  int n;
  scanf("%d\n",&n);
  double a[n],b[n];
  double sum;
  if(n>=2){
  a[0]=2;
  a[1]=3;
  b[0]=1;
  b[1]=2;
  sum=2/1+3/2;
  for(k=2;k<n;k++)
 { a[k]=a[k-2]+a[k-1];
   b[k]=b[k-1]+b[k-2];
   sum=sum+(a[k]/b[k]);
 }
  printf("%.3lf\n",sum+0.5);
}
 if(n==1)
 {printf("%.3lf\n",2.000);}
 }
return 0;
}
  