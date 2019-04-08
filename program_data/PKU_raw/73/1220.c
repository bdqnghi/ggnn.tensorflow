int main(){
    int n=0,i,j,x,y;
    int sz[5][5];
    int z[5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    int m=0;
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            if(sz[j][i]>sz[j][m]){
               m=i;
            }
        }
        z[j]=m;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(sz[i][z[i]]>sz[j][z[i]])
               break;
        }
        if(j==5){
           n=n+1;
           x=i+1;
           y=z[i]+1;
           printf("%d %d %d",x,y,sz[i][z[i]]);
          
        }
    }
    if(n==0)
        printf("not found");
    
    return 0;
}