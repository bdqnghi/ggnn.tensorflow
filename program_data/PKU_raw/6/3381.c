int main(){
    int m,n,k,j,l,a,i;
    cin>>k;
    int aa[k+1];
    for(i=1;i<=k;i++){
      aa[i]=0;
       cin>>m>>n;
       for(j=1;j<=m;j++){
         for(l=1;l<=n;l++){
           cin>>a;
           if(j==1||j==m||l==1||l==n)
                 aa[i]=aa[i]+a;
                 }
                 }
                 }
         for(i=1;i<=k;i++)
         cout<<aa[i]<<endl;
              return 0;
         }