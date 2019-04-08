int main(){
 int i,j,m,n,a[5][5];
 for(i=0;i<5;i++){
    for(j=0;j<4;j++){
        scanf("%d",&(a[i][j]));
     }
    scanf("%d\n",&(a[i][4]));
  }
 scanf("%d%d",&n,&m);
 if(m<=4&&n<=4){
  for(j=0;j<5;j++){
    i=a[n][j];
    a[n][j]=a[m][j];
    a[m][j]=i;
  }
for(i=0;i<5;i++){
  for(j=0;j<4;j++){
    printf("%d ",a[i][j]);
   }
  printf("%d\n",a[i][4]);
 }

 }else{
printf("error");
}
return 0;
}