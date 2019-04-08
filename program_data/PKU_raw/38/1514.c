int main()
{
    int k,i;
    scanf("%d",&k);
     
     for(i=0;i<k;i++){
      int n,j;
      scanf("%d\n",&n);
      double sz[100],s[100];
      double a=0,sum1=0,sum2=0;

      for(j=0;j<n;j++){
        scanf("%lf\n",&sz[j]);
        sum1+=sz[j];
       }
         a=sum1/n;
         for(j=0;j<n;j++){
           sum2+=(sz[j]-a)*(sz[j]-a);
        }  
         s[i]=sqrt(sum2/n);
         printf("%.5f\n",s[i]);
     }
    
     return 0;
}      