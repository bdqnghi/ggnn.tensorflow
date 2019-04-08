int main()
{
    int k,n,i,j;
    double sz[50][100],pj[50],fc[50],zs[50],fch[50];
    scanf("%d",&k);
    for(i=0;i<k;i++){
       zs[i]=0;
       fc[i]=0;
       pj[i]=0;
       fch[i]=0;
       scanf("%d",&n);
       for(j=0;j<n;j++){
          scanf("%lf",&sz[i][j]);
          }
       for(j=0;j<n;j++){
          zs[i]+=sz[i][j];
          }
       pj[i]=zs[i]/n;
       for(j=0;j<n;j++){
          fch[i]+=(sz[i][j]-pj[i])*(sz[i][j]-pj[i]);
          }
       fc[i]=sqrt(fch[i]/n);
       }
    for(i=0;i<k;i++){
       printf("%.5lf\n",fc[i]);
       }
    int a;
    scanf("%d",&a);
    return 0;
}
