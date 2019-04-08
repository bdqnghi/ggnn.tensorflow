int fbnq(int n){
    if(n==0){
    return 0;
   }
     if(n==1){
   return 1;
   }
     return fbnq(n-1)+fbnq(n-2);
  }
int main()
{
  int m,n,i,j;
  double sum;
  scanf("%d",&m);
  for(j=0;j<m;j++){
   scanf("%d",&n);
   sum=0;
   for(i=1;i<=n;i++){
    sum+=(double)fbnq(i+2)/fbnq(i+1);
   }
   printf("%.3lf\n",sum);
  }
   return 0;
}
 