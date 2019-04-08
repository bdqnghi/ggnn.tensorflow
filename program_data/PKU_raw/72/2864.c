int main(){
    int i,j,m,n,x;
    int shandi[LEN][WIDTH],shanding[LEN][2];
    scanf("%d%d",&m,&n);
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            scanf("%d",&(shandi[i][j]));
        }
    }
    for(j=0;j<m+2;j++){
        shandi[j][0]=0;
    }
    for(j=0;j<m+2;j++){
        shandi[j][n+1]=0;
    }
    for(j=0;j<n+2;j++){
        shandi[0][j]=0;
    }
    for(j=0;j<n+2;j++){
        shandi[m+1][j]=0;
    }
    x=0;
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            if(shandi[i][j]>=shandi[i][j-1]&&shandi[i][j]>=shandi[i][j+1]&&shandi[i][j]>=shandi[i-1][j]&&shandi[i][j]>=shandi[i+1][j]){
                shanding[x][0]=i-1;
                shanding[x][1]=j-1;
                x++;
            }
        }
    }
    for(i=0;i<x;i++){
        printf("%d %d\n",shanding[i][0],shanding[i][1]);
    }
    return 0;
}


