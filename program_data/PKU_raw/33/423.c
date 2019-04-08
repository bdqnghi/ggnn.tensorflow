int main(){
int n;
char c[300];
scanf("%d",&n);
getchar();
for (int j=0;j<n;j++){
   gets(c);
   for (int i=0;i<strlen(c);i++){
	 if (c[i]=='A') {
      printf("T");
     }
     if (c[i]=='T') {
      printf("A");
     }
     if (c[i]=='G') {
      printf("C");
     }
     if (c[i]=='C') {
      printf("G");
     }
    if (i==(strlen(c)-1)){
      printf("\n");
	 }
	}
}
return 0;
}