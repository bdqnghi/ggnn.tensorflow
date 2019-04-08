int add(int m,int n);
int main(){
    int a[5][5],m,n,i,j,p,b,c;
    for(i=0;i<5;i++){
         for(j=0;j<5;j++){
              scanf("%d",&a[i][j]);
         }
    }
    scanf("%d %d",&m,&n);
    if(add(m,n)){
        for(p=0;p<5;p++){
                 c=a[m][p];
                 a[m][p]=a[n][p];
                 a[n][p]=c;
        } 
         for(i=0;i<5;i++){
            for(j=0;j<5;j++){
              if(j==4){
                  printf("%d\n",a[i][j]);
              }else{
                   printf("%d ",a[i][j]);
              }
            }
         }
    }else{
           printf("error");
    }
    return 0;
}
 int add(int m,int n){
     if(m>=0&&m<5&&n>=0&&n<5){
              return 1;
     }else{
             return 0;
     }
  }
                
 
    