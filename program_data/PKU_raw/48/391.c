int main(){
    int a[11][11]={0},b[11][11]={0},m,n,x,i,r;
    scanf("%d%d",&m,&n);
    a[5][5]=m;
    b[5][5]=m;
    for(x=0;x<n;x++){ 
    for(i=1;i<10;i++){
                     for(r=1;r<10;r++){
                                      a[i][r]=2*b[i][r]+b[i-1][r-1]+b[i-1][r]+b[i-1][r+1]+b[i][r-1]+b[i][r+1]+b[i+1][r-1]+b[i+1][r]+b[i+1][r+1]; 
                                      }
                     }
    for(i=1;i<10;i++){
                      for(r=1;r<10;r++){
                                        b[i][r]=a[i][r];
                                        }
                      }
                      }
    for(i=1;i<10;i++){
                      for(r=1;r<9;r++){
                                        printf("%d ",a[i][r]);
                                        }
                      printf("%d\n",a[i][r]);
                                        }    
    return 0;
}