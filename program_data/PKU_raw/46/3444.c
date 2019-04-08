int main(){
    int row,cow;
    scanf("%d%d",&row,&cow);
    int array[row][cow];
    for(int i=0;i<row;i++){
        for(int k=0;k<cow;k++){
            scanf("%d",&array[i][k]);
        }
    }
    int time=0;
    for(int i=0;i<100;i++){
        for(int m=i;m<cow-i;m++){
            printf("%d\n",array[i][m]);
            time++;
        }
        if(time==row*cow){
            break;
        }
        for(int n=i+1;n<row-i;n++){
            printf("%d\n",array[n][cow-i-1]);
            time++;
        }
        if(time==row*cow){
            break;
        }
        for(int j=cow-2-i;j>=i;j--){
            printf("%d\n",array[row-i-1][j]);
            time++;
        }
        if(time==row*cow){
            break;
        }
        for(int l=row-2-i;l>=i+1;l--){
            printf("%d\n",array[l][i]);
            time++;
        }
        if(time==row*cow){
            break;
        }
    }
  return 0;
}


