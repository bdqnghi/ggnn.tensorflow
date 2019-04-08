int main(){
   int k,i,j;
   int gs[K];
   double sz[N];
   double sum=0;
   double a,s;
   double fch=0; 
   double xb[N];
   scanf("%d\n",&k);
   for(i=0;i<k;i++){
      scanf("%d\n",&gs[i]);
      for(j=0;j<gs[i];j++){
         scanf("%lf ",&sz[j]); 
         sum+=sz[j];       
      }
      a=sum/gs[i]; 
      for(j=0;j<gs[i];j++){
         xb[j]=(sz[j]-a)*(sz[j]-a);
         fch+=xb[j];
      }
      s=sqrt(fch/gs[i]);
      printf("%.5lf\n",s);
      sum=0;fch=0;
   }
   return 0;
}