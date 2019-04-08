int main(){
  char s[110][60];
  int i,j;
  for (i=0;scanf("%s",s[i])!=EOF;i++);
  for (j=0;j<i;j++)
	  printf("%s%s",j==0?"":" ",s[i-j-1]);
  printf("\n");
  return 0;
}
