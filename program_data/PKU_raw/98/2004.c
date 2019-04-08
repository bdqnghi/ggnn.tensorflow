int main(){
 char s[1000][40];
 int n,i;
 scanf("%d",&n);getchar();
 for(i=0;i<n;i++){
     scanf("%s",s[i]);getchar();
     }
  int h=strlen(s[0]);
  printf("%s",s[0]);
  for(i=1;i<n;i++){
     h+=strlen(s[i])+1;
     if(h<=80){
           printf(" %s",s[i]);getchar();
     }else{
           h=strlen(s[i]);
           printf("\n");getchar();
           printf("%s",s[i]);
           }
  }
    return 0;
} 