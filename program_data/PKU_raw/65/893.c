int main(){
    int n,a=0,b=0,c=0,i,j;
    scanf("%d",&n);
    int sz[201][3];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
           scanf("%d",&sz[i][j]);
        }
        if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
            a++;
        }else 
        if((sz[i][0]==1&&sz[i][1]==0)||(sz[i][0]==2&&sz[i][1]==1)||(sz[i][0]==0&&sz[i][1]==2)){
            b++;
        }else
        if(sz[i][0]==sz[i][1]){
            a++;
            b++;
        }
    }
    if(a>b){
        printf("A");
        
    }else
    if(b>a){
            printf("B");
    }else
    if(b=a){
            printf("Tie");
        }
    return 0;
}
        
        
    
