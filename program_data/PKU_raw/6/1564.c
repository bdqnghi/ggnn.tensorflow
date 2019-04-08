int main()
{
    int k,m,n,i,j,t,s=0;
    scanf("%d",&k);
    int a[100][100],b[k-1];
    for(t=0;t<k;t++){
    scanf("%d%d",&m,&n);
         for(i=0;i<m;i++){
                     for(j=0;j<n;j++){
                                      scanf("%d",&a[i][j]);
                                      }
                          }
         for(i=0;i<m;i++){
                     for(j=0;j<n;j++){
                                   if(i==0 || i==m-1){
                                                      s=s+a[i][j];
                                                      }
                                   else if(j==0 || j==n-1){
                                                          s=s+a[i][j];
                                                          }
                                   }
                         }
        b[t]=s;
        s=0;
    } 
    for(t=0;t<k;t++){
                     printf("%d\n",b[t]);
                     }return 0;
}