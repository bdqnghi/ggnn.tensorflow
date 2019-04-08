int main()
{
   int i,j,n,k;
   double sum=0,SUM=0,a,x[1000],S;
   scanf("%d",&k);
   for(i=0;i<k;i++){
    scanf("%d",&n);
    sum=0;
     for(j=0;j<n;j++){
    scanf("%lf",&x[j]);
     sum+=x[j];
     }
     a=(double)sum/n;
     SUM=0;
     for(j=0;j<n;j++){
     SUM+=(x[j]-a)*(x[j]-a);
     }
     S=sqrt(SUM/n);
     printf("%.5lf\n",S);
   }
   return 0;
}

