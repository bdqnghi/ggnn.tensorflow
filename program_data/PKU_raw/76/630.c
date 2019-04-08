int main(){
    int n,i,e,m,j,k,b,c;
    struct a{
        int x,y;
    }sz[50000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d%d\n",&sz[i].x,&sz[i].y);
    }
    for(k=1;k<n;k++){
        for(i=0;i<n-k;i++){
            if(sz[i].x>sz[i+1].x){
                e=sz[i+1].x;
                m=sz[i+1].y;
                sz[i+1].x=sz[i].x;
                sz[i+1].y=sz[i].y;
                sz[i].x=e;
                sz[i].y=m;
            }
        }
    }
    b=sz[0].y;
    c=sz[0].y;
    j=0;
    for(i=0;i<n;i++){
        if(b<sz[i].y){
            b=sz[i].y;
        }
    }
    for(i=0;i<n-1;i++){
        if(c<sz[i].y){c=sz[i].y;}
        if(sz[i].y<sz[i+1].x&&sz[i+1].x>c){
            printf("no");
            j=1;
            break;
            }
    }
    if(j==0){
        printf("%d %d",sz[0].x,b);
    }
     return 0;
}
