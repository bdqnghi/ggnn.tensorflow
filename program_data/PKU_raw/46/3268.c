int main(){
    int i,j,k,n=0,row,col,sz[100][100],xz[10000];
    scanf("%d %d\n",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d ",&sz[i][j]);
        }
    }
   for(k=0;n<row*col;k++){
        i=0+k;
        for(j=0+k;j<col-k;j++){
            xz[n]=sz[i][j];
            n++;
        }
        for(j--,i=1+k;i<row-k;i++){
            xz[n]=sz[i][j];
            n++; 
        }
        for(i--,j=col-2-k;j>=0+k;j--){
             xz[n]=sz[i][j];
             n++;
        }
        for(j++,i=row-2-k;i>=1+k;i--){
             xz[n]=sz[i][j];
             n++;
        }
   }
    for(n=0;n<row*col;n++){
    printf("%d\n",xz[n]);
    }
    return 0;
    
}
