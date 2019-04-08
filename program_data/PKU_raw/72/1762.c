int main(){
int m,n,i,j,a,b,c,d,p,q,x=0;
    int sz[20][20];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        scanf("%d",&sz[i][j]);
      }
    }
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        a=i+1;
        b=i-1;
        c=j+1;
        d=j-1;
        p=m-1;
        q=n-1;
         if(i==0&&j==0){
           if(sz[i][j]>=sz[0][1]&&sz[i][j]>=sz[1][0]){
              printf("%d %d\n",i,j);
          }
        }else if(i==0&&j==q){
           if(sz[i][j]>=sz[0][d]&&sz[i][j]>=sz[1][j]){
              printf("%d %d\n",i,j);
          }
        }else if(i==p&&j==0){
           if(sz[i][j]>=sz[i][1]&&sz[i][j]>=sz[b][0]){
              printf("%d %d\n",i,j);
          }
        }else if(i==p&&j==q){
           if(sz[i][j]>=sz[i][d]&&sz[i][j]>=sz[b][j]){
              printf("%d %d\n",i,j);
          }
        }else if(i==0&&j>0&&j<q){
           if(sz[i][j]>=sz[i][c]&&sz[i][j]>=sz[i][d]&&sz[i][j]>=sz[1][j]){
              printf("%d %d\n",i,j);
          }
        }else if(i==p&&j>0&&j<q){
          if(sz[i][j]>=sz[i][c]&&sz[i][j]>=sz[i][d]&&sz[i][j]>=sz[b][j]){
              printf("%d %d\n",i,j);
          }
        }else if(j==0&&i>0&&i<p){
           if(sz[i][j]>=sz[a][j]&&sz[i][j]>=sz[b][j]&&sz[i][j]>=sz[i][1]){
              printf("%d %d\n",i,j);
          }
        }else if(j==q&&i>0&&i<p){
           if(sz[i][j]>=sz[a][j]&&sz[i][j]>=sz[b][j]&&sz[i][j]>=sz[i][d]){
              printf("%d %d\n",i,j);
          }
        }else{
          if(sz[i][j]>=sz[i][c]&&sz[i][j]>=sz[i][d]&&sz[i][j]>=sz[a][j]&&sz[i][j]>=sz[b][j]){
            printf("%d %d\n",i,j);
          }
        }

      }
    }
return 0;
}