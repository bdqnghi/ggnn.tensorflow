    int main(){
    int g,n,m,k,x,h,i,j;
    int a[5][5],b[5],c[5],d[5],e[5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           scanf("%d",&a[i][j]);
           }
        }     
    for(i=0;i<5;i++){
    g=0;
        for(j=0;j<5;j++){
           if(a[i][j]>g){
              g=a[i][j];
              
              b[i]=i;
              c[i]=j;
              }
              }
              }
    for(j=0;j<5;j++){
    h=1000000;
        for(i=0;i<5;i++){
           if(a[i][j]<h){
              h=a[i][j];
              d[j]=i;
              e[j]=j;
              }
              }
              }
    x=0;
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
           if(b[i]==d[j]&&c[i]==e[j]){
           m=b[i];
           n=c[i];
           printf("%d %d %d",m+1,n+1,a[m][n]);
           x=1;
           }
           }
        }
        if(x==0){
           printf("not found");
           }    
    return 0;
}
