int panduan(int a,int b, int c,int d,int e);
int panduan(int a,int b, int c,int d,int e){
    int s=0;
    if(e>=a&&e>=b&&e>=c&&e>=d){
        s=1;
    }
    return s;
}
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int dikuai[m+2][n+2];
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            scanf("%d",&dikuai[i][j]);
        }
    }
    for(j=0,i=0;i<m+2;i++){
        dikuai[i][j]=0;
    }
    for(j=n+1,i=0;i<m+2;i++){
        dikuai[i][j]=0;
    }
    for(j=0,i=m+1;j<n+2;j++){
        dikuai[i][j]=0;
    }
    for(j=0,i=0;j<n+2;j++){
        dikuai[i][j]=0;
    }
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
           if(panduan(dikuai[i-1][j],dikuai[i+1][j],dikuai[i][j-1],dikuai[i][j+1],dikuai[i][j])==1){
               printf("%d %d\n",i-1,j-1);
           }
        }
    }
    return 0;
    
}
