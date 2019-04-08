int main(){
int sz[5][5];
int n,m; 
int sw(int csz[5][5],int *x,int *y);
for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        scanf("%d",&sz[i][j]);
    }    
}
scanf("%d %d",&n,&m);
if (sw(sz,&n,&m)==1){
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
           if (j==4){
                  printf("%d\n",sz[i][j]);
           }
           else {
                  printf("%d ",sz[i][j]);
           }           
        }    
     }
}
else {
      printf("error");
}
return 0;    
}
int sw(int csz[5][5],int *x,int *y){
    int e;    
    if (*x>=0&&*x<5&&*y>=0&&*y<5){
         for (int k=0;k<5;k++){
               e=csz[*x][k];
               csz[*x][k]=csz[*y][k];
               csz[*y][k]=e;
         }
         return 1;
    }
    else {
         return 0;
    }
}