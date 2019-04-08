int main(){
  int n,i,j;
  scanf("%d",&n);
  char s[21];
  for(i=0;i<n;i++){
    for(j=0;j<21;j++)s[i]=0;
    scanf("%s",s);
    if((s[0]<'A'||s[0]>'z'||(s[0]<'a'&&s[0]>'Z'))&&s[0]!='_')
      {printf("no\n");goto m;}
    for(j=1;s[j]!='\0';j++){
      if((s[j]<'0'||s[j]>'z'||(s[j]>'9'&&s[j]<'A')||(s[j]<'a'&&s[j]>'Z'))&&s[j]!='_')
      {printf("no\n");goto m;}
     }
    printf("yes\n");
    m:;
  }
  return 0;
}
   