int main(){
    int x,y;
    scanf("%d%d",&y,&x);
    int sz[x][y];
    int c,d;
    c=x*y;
    d=0;
    for(int b=0;b<y;b++){
        for(int a=0;a<x;a++){
            scanf("%d",&sz[a][b]);
        }
    }
    for(int i=0;i!=-1;i++){
    for(int a=i;a<x-i;a++){
        printf("%d\n",sz[a][i]);
        sz[a][i]=0;
        d++;
    }
    if(d==c){
        break;
    }
    for(int b=i+1;b<y-i;b++){
        printf("%d\n",sz[x-i-1][b]);
        sz[x-i-1][b]=0;
        d++;
    }
    if(d==c){
        break;
    }
    for(int a=x-i-2;a>=i;a--){
        printf("%d\n",sz[a][y-i-1]);
        sz[a][y-i-1]=0;
        d++;
    }
    if(d==c){
        break;
    }
    for(int b=y-i-2;b>i;b--){
        printf("%d\n",sz[i][b]);
        sz[i][b]=0;
        d++;
    }
    if(d==c){
        break;
    }
    }
    return 0;
}


