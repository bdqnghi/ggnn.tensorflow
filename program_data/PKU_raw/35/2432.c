int main(){
    int n,m,i,j,e,a;
    scanf("%d,%d",&n,&m);
    int sz[8][8],td[8][8],zd[8],bj[8][8],hd[8];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){scanf("%d",&sz[i][j]);
        td[i][j]=sz[i][j];
        bj[i][j]=sz[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(sz[i][j]>sz[i][j+1]){sz[i][j+1]=sz[i][j]; }
        }}
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){if(td[i][j]==sz[i][m-1]){zd[i]=j;}}}
        for(j=0;j<m;j++){for(i=0;i<n;i++){if(bj[i][j]<bj[i+1][j]){bj[i+1][j]=bj[i][j];}}}
        for(j=0;j<m;j++){
        for(i=0;i<n;i++){if(td[i][j]==bj[n-1][j]){hd[j]=i;}}}
        for(i=0;i<n;i++){a=zd[i];if(hd[a]==i){printf("%d+%d",i,a);return 0;}
        else continue;
        
        
        }
        printf("No");
        return 0;}
