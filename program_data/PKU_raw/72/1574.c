int main(){
    int m,n,a,b;
    int sz[30][30]={0};
    scanf("%d %d",&m,&n);
    for(a=1;a<=m;a++){
                      for(b=1;b<=n;b++){scanf("%d",&sz[a][b]);}}
        for(a=1;a<=m;a++){
                      for(b=1;b<=n;b++){if(sz[a][b]>=sz[a-1][b] && sz[a][b]>=sz[a+1][b] && sz[a][b]>=sz[a][b-1] && sz[a][b]>=sz[a][b+1]){printf("%d %d\n",a-1,b-1);}
                                        }
                      }
    return 0;
}
  