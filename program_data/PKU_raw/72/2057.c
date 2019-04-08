int main( ){
    int i,k,m,n,q=0;
    int sz[22][22],mm[100],nn[100];
    scanf("%d %d",&m,&n);
    for(i=1;i<m+1;i++){
        for(k=1;k<n+1;k++){
            scanf("%d",&sz[i][k]);
        }
    }
    for(i=0;i<m+2;i++){
        for(k=0;k<n+2;k++){
    if(i==0||i==m+1||k==0||k==n+1){
        sz[i][k]=0;
    }
        }
    }
      for(i=1;i<m+1;i++){
        for(k=1;k<n+1;k++){
                if(sz[i][k]>=sz[i][k+1]&&sz[i][k]>=sz[i][k-1]&&sz[i][k]>=sz[i+1][k]&&sz[i][k]>=sz[i-1][k]){ 
                mm[q]=i-1;
                nn[q]=k-1;
                q++;
                }
            }
      }
    for(i=0;i<q;i++){
    printf("%d %d\n",mm[i],nn[i]);
    }
    return 0;
}

