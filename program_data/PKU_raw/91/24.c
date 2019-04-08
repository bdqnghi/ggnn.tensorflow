int main(){
  char a[102];
  int i;
  gets(a);
  for(i=0;;i++){
      printf("%c",a[i]+a[i+1]);
      if(a[i+2]=='\0'){
         break;
        }
     }
  printf("%c",a[i+1]+a[0]);
  return 0;
}