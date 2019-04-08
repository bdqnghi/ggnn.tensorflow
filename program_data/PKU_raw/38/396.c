int main()
{
 int k,i;
 scanf("%d",&k);
 for(i=0;i<k;i++){
   int n,j; 
   double x[100],sum=0,aver,b;
   scanf("%d",&n);
   for(j=0;j<n;j++){
    scanf("%lf",&x[j]);
    sum+=x[j];
   }
   aver=sum/n;
   double a=0;
   for(j=0;j<n;j++){
    
    a+=(x[j]-aver)*(x[j]-aver);
   }
   b=sqrt(a/n);
   printf("%.5lf\n",b);
 }
 
 
 
}

