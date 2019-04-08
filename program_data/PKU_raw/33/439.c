int main(){
int n,i,j;
scanf("%d",&n);
char a[n][1000];
for(i=0;i<n;i++){
   scanf("%s",a[i]);
   }
for(i=0;i<n;i++){
    for(j=0;a[i][j]!='\0';j++){
       if(a[i][j]=='A'){
          printf("T");
          }
       if(a[i][j]=='C'){
          printf("G");
          }
       if(a[i][j]=='G'){
          printf("C");
          }
       if(a[i][j]=='T'){
          printf("A");
          }
       }
    if(a[i][j]=='\0')
    printf("\n");
    }
scanf("%d",&i);
return 0;
}

