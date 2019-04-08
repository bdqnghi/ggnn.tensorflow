int main(){
    int sz[100][16],m,n;
    int i,j,k;
    for(i=0;i<100;i++){
      for(j=0;j<16;j++){
        scanf("%d",&m);
        if(m!=0){
          sz[i][j]=m;
          }else {break;}
          }
      if(sz[i][0]==-1){
        break;}
    }
    n=0;
    for(i=0;i<100;i++){
      if(sz[i][0]==-1){
        break;}
      for(j=0;j<15;j++){
        for(k=0;k<15;k++){
          if(sz[i][j]!=0&&sz[i][k]!=0){
            if(sz[i][j]==2*sz[i][k]){
              n=n+1;
              }}}}
      printf("%d\n",n);
      n=0;        
      }
    return 0;
}
