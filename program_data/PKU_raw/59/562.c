int main(){
    int n,m,i,a,b,jm[102][102]={0},next[102][102]={0},s=0;
    char mz[102][102];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%s",mz[i]);
                     for(b=0;b<n;b++){
                                      if(mz[i][b]=='@'){
                                                        jm[i+1][b+1]=2;
                                                        }
                                                        else if(mz[i][b]=='.'){
                                                             jm[i+1][b+1]=1;
                                                             }
                                                             }
                                                             }
    scanf("%d",&m);
    for(i=1;i<m;i++){
                     for(a=1;a<=n;a++){
                                       for(b=1;b<=n;b++){
                                                         if(jm[a][b]==1&&(jm[a][b-1]==2||jm[a][b+1]==2||jm[a-1][b]==2||jm[a+1][b]==2)){
                                                                                                                                       next[a][b]=2;
                                                                                                                                                 }
                                                                                                                                                 else{
                                                                                                                                                      next[a][b]=jm[a][b];
                                                                                                                                                      }
                                                                                                                                                      }
                                                                                                                                                      }
                     for(a=1;a<=n;a++){
                                       for(b=1;b<=n;b++){
                                                         jm[a][b]=next[a][b];
                                                         if((i==m-1)&&jm[a][b]==2){
                                                                                 s++;
                                                                                
                                                                                     }
                                                                                     }
                                                                                     }
                                                                                     }
    printf("%d",s);                           
    return 0;
}
