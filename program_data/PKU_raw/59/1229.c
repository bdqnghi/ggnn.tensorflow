int main(){
    int n,i,m,k,t,renshu=0;
    scanf("%d",&n);
    char sushe[n][n+1];
    int biao[n+2][n+2];
    for(i=0;i<n+2;i++){
        for(k=0;k<n+2;k++){
            biao[i][k]=0;
        }
    }
    for(i=0;i<n;i++){
       scanf("%s",&sushe[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(sushe[i][k]=='@'){
                biao[i+1][k+1]=-1;
            }else if(sushe[i][k]=='#'){
                biao[i+1][k+1]=0;
            }else if(sushe[i][k]=='.'){
                biao[i+1][k+1]=1;
            }
        }
    }
    for(t=1;t<m;t++){
        for(i=1;i<n+1;i++){
            for(k=1;k<n+1;k++){
                if(biao[i][k]==-1){
                    if(biao[i-1][k]==1){
                        biao[i-1][k]=2;
                    }
                    if(biao[i+1][k]==1){
                        biao[i+1][k]=2;
                    }
                    if(biao[i][k-1]==1){
                        biao[i][k-1]=2;
                    }
                    if(biao[i][k+1]==1){
                        biao[i][k+1]=2;
                    }
                }
            }
        }
        for(i=0;i<n+2;i++){
            for(k=0;k<n+2;k++){
                if(biao[i][k]==2){
                    biao[i][k]=-1;
                }
            }
        }
    }
    for(i=0;i<n+2;i++){
        for(k=0;k<n+2;k++){
            if(biao[i][k]==-1){
                renshu++;
            }
        }
    }
    printf("%d",renshu);
    return 0;
}