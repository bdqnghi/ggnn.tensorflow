int main(){
    int n,c,a,b,i,o,p,k;
    double e;
    scanf("%d",&n);
    double jl[n][n];
    int x[n],y[n],z[n];
    k=n*(n-1)/2;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(a=0;a<n;a++){
        b=a+1;
        while(b<n){
            jl[a][b]=sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b])+(z[a]-z[b])*(z[a]-z[b]));
            b++;
        }
    }
    e=0;
    for(i=0;i<k;i++){
        for(a=0;a<n;a++){
        b=a+1;
          while(b<n){
            if(e<jl[a][b]){
                e=jl[a][b];
                o=a;
                p=b;
            }
                b++;
          }
        }
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[o],y[o],z[o],x[p],y[p],z[p],e);    
          jl[o][p]=0;
          e=0;
    }
    return 0;
}

