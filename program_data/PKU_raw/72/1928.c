int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int sz[m][n];
    int zs[m][n];
    for(int i=0;i<m;i++){
        for(int x=0;x<n;x++){
            scanf("%d",&sz[i][x]);
            zs[i][x]=1;
        }
    }
    for(int i=0;i<m;i++){
        if(i==0){
            for(int x=0;x<n;x++){
                if(sz[i][x]>=sz[i+1][x]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
        if(i>0&&i<m-1){
            for(int x=0;x<n;x++){
                if(sz[i][x]>=sz[i+1][x]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
                if(sz[i][x]>=sz[i-1][x]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
        if(i==m-1){
            for(int x=0;x<n;x++){
                if(sz[i][x]>=sz[i-1][x]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
    }
    for(int x=0;x<n;x++){
        if(x==0){
            for(int i=0;i<m;i++){
                if(sz[i][x]>=sz[i][x+1]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
        if(x>0&&x<n-1){
            for(int i=0;i<m;i++){
                if(sz[i][x]>=sz[i][x+1]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
                if(sz[i][x]>=sz[i][x-1]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
        if(x==n-1){
            for(int i=0;i<m;i++){
                if(sz[i][x]>=sz[i][x-1]){
                    zs[i][x]=zs[i][x]*1;
                }else{
                     zs[i][x]=zs[i][x]*0;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int x=0;x<n;x++){
            if(zs[i][x]==1){
                printf("%d %d\n",i,x);
            }
        }
    }
return 0;
}
