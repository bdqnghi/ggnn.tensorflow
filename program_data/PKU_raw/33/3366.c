int main(){
 int n,i,j,b[1000];
 char a[1000][1000];
 scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%s",a[i]);
   b[i]=strlen(a[i]);
 }
 for(i=0;i<n;i++){
   for(j=0;j<strlen(a[i]);j++){
     if(a[i][j]=='A'){
       printf("T");
     }
     if(a[i][j]=='T'){
       printf("A");
     }
     if(a[i][j]=='C'){
       printf("G");
     }
     if(a[i][j]=='G'){
       printf("C");
     }
     if(j==strlen(a[i])-1){
       printf("\n");
     }
   }
 
 }
  return 0;


}
