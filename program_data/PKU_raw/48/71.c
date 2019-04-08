int a[10][10][5];

int k,i,j,l,n;

int main(){
    for(i=0;i<5;i++)
    for(j=1;j<10;j++)
    for(k=1;k<10;k++)
    a[j][k][i]=0;
    
    scanf("%d%d",&n,&k);
    a[5][5][0]=n;
    
    for(l=0;l<k;l++)
    for(i=1;i<10;i++)
    for(j=1;j<10;j++){
        if(a[i][j][l]!=0){
            a[i][j][l+1]+=2*a[i][j][l];
            a[i-1][j-1][l+1]+=a[i][j][l];
            a[i-1][j][l+1]+=a[i][j][l];
            a[i-1][j+1][l+1]+=a[i][j][l];
            a[i][j-1][l+1]+=a[i][j][l];
            a[i][j+1][l+1]+=a[i][j][l];
            a[i+1][j-1][l+1]+=a[i][j][l];
            a[i+1][j][l+1]+=a[i][j][l];
            a[i+1][j+1][l+1]+=a[i][j][l];
        }
    }
    
    for(i=1;i<=9;i++){
      for(j=1;j<9;j++){
        printf("%d ",a[i][j][k]);
      }
      printf("%d\n",a[i][9][k]);
    }

    scanf("%d",&n);
return 0;
}
