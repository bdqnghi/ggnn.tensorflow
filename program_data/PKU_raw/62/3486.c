int main(){
  char s[1100];
  int i,j;
  for (i=0;scanf("%s",s)!=EOF;i++)
    printf("%s%s",i==0?"":" ",s);
  printf("\n");
  return 0;
}
