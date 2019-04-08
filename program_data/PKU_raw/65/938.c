int main (){
    int n,i,k;
    scanf("%d",&n);
    int sz[1000][1000];
    for(i=0;i<n;i++){
        for(k=0;k<2;k++){
            scanf("%d",&sz[i][k]);
        }
    }
    int a=0;
    int b=0;
    for(i=0;i<n;i++){
            if(sz[i][0]==sz[i][1]){
                continue;
        }
            if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
            a++;
            }else{
            b++;
            } 
            
    }
    if(a>b){
        printf("A");
    } 
    if(a<b){
        printf("B");
    }
    if(a==b){
        printf("Tie");
    }
    return 0;
}
