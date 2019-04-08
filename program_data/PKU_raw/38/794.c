int main()
{
    int i,j,n,m;
    double sz[1000],sum=0,av=0,S=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
         scanf("%d", &m);
         sum=0;
         av=0;
         for(j=0;j<m;j++){
             scanf("%lf", &sz[j]);
             sum+=sz[j];
             
         }
         av=sum/m;
         sum=0;
         for(j=0;j<m;j++){
            
            sum+=(sz[j]-av )*(sz[j]-av );
         }
         S=pow(sum/m,0.5);
         printf("%.5lf\n", S);

    }
    return 0;
}