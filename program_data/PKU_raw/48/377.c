int main(){
    int a[9][9]={0},b[9][9]={0};
    int m,n;
    int i,j,l;
    int x,y;
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    b[4][4]=m;
    for(l=0;l<n;l++){
                     for(i=0;i<9;i++){
                                      for(j=0;j<9;j++){
                                                       if(b[i][j]!=0){
                                                                      for(x=i-1;x<=i+1;x++){
                                                                                            for(y=j-1;y<=j+1;y++){
                                                                                                                  a[x][y]+=b[i][j];                                                                                                                                                                             
                                                                                            }                      
                                                                      }               
                                                       } 
                                      }                 
                     }
                     for(i=0;i<9;i++){
                                      for(j=0;j<9;j++){
                                                       b[i][j]=a[i][j];                                
                                      }                 
                     }
                                      
    }
    for(i=0;i<9;i++){
                     for(j=0;j<8;j++){
                                      printf("%d ",a[i][j]);                 
                     }
                     printf("%d",a[i][8]);
                     printf("\n");
                                      
    }
    return 0;
}